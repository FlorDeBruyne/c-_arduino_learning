//    - Implement a program to manage student records using file handling.
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

struct studentData{
    string name;
    double age;
    string class_name;
    double id;
};


class School{
public:
    string name;

    School(string name): name(name){};

    void addRecord(studentData student){
        ofstream appendFile("studentRecords.csv", ios::app);
        if (appendFile.is_open()) {
            appendFile << student.name << ";" << student.age << ";" << student.class_name << ";" << student.id << endl;
            appendFile.close();
        } else {
            cerr << "Unable to open file";
        }
    };

    void viewRecords(){
        ifstream inFile("studentRecords.csv");
        if (!inFile.is_open()){
            cerr << "Unable to open file" << endl;
            return;
        }
        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();    
    }  

    void deleteRecord(double studentId){
        ifstream inFile("studentRecords.csv");
        ofstream tempFile("temp.csv");
        if (!inFile.is_open()){
            cerr << "Unable to open file" << endl;
            return;
        }
        string line;
        bool found = false;

        while (getline(inFile, line)) {
            stringstream ss(line);
            string name, age, class_name, id;
            getline(ss, name, ';');
            getline(ss, age, ';');
            getline(ss, class_name, ';');
            getline(ss, id, ';');

            if (stod(id) == studentId) { 
                found = true;
                continue;
            }
            tempFile << line << endl;
        }

        inFile.close();
        tempFile.close();

        if (!found) {
            cerr << "Record with ID " << studentId << " not found." << endl;
        }

        remove("studentRecords.csv");
        rename("temp.csv", "studentRecords.csv");
    }
    

    void updateRecord(double studentId, double newStudentId) {
        ifstream inFile("studentRecords.csv");
        if (!inFile.is_open()) {
            cerr << "Unable to open file" << endl;
            return;
        }

        ofstream tempFile("temp.csv");
        string line;
        bool found = false;

        while (getline(inFile, line)) {
            stringstream ss(line);
            string name, age, class_name, id;
            getline(ss, name, ';');
            getline(ss, age, ';');
            getline(ss, class_name, ';');
            getline(ss, id, ';');

            if (stod(id) == studentId) { 
                found = true;
                tempFile << name << ";" << age << ";" << class_name << ";" << newStudentId << endl;
            } else {
                tempFile << line << endl;
            }
        }

        inFile.close();
        tempFile.close();

        if (!found) {
            cerr << "Record with ID " << studentId << " not found." << endl;
        }

        remove("studentRecords.csv");
        rename("temp.csv", "studentRecords.csv");
    }
};  


int main() {
    // Initialize the School object
    School mySchool("Greenfield High School");

    // Create sample student records
    studentData student1 = {"Alice Johnson", 17, "12A", 1001};
    studentData student2 = {"Bob Smith", 16, "11B", 1002};
    studentData student3 = {"Charlie Brown", 18, "12A", 1003};

    // Add records
    cout << "Adding records..." << endl;
    mySchool.addRecord(student1);
    mySchool.addRecord(student2);
    mySchool.addRecord(student3);

    // View all records
    cout << "\nViewing all records:" << endl;
    mySchool.viewRecords();

    // Delete a record
    cout << "\nDeleting record with ID 1002..." << endl;
    mySchool.deleteRecord(1002);

    // View all records after deletion
    cout << "\nViewing all records after deletion:" << endl;
    mySchool.viewRecords();

    // Update a record
    cout << "\nUpdating record with ID 1001 to have a new ID 2001..." << endl;
    mySchool.updateRecord(1001, 2001);

    // View all records after update
    cout << "\nViewing all records after update:" << endl;
    mySchool.viewRecords();

    return 0;
}