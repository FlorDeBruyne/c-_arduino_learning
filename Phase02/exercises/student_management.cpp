//    - Implement a program to manage student records using file handling.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct studentData{
    string name;
    double age;
    string class_name;
};


class School{
public:
    string name;

    School(string name): name(name){
    };

    void addRecord(studentData student){
        ofstream appendFile("studentRecords.csv", ios::app);
        if (appendFile.is_open()) {
            appendFile << student.name << ";" << student.age << ";" << student.class_name << endl;
            appendFile.close();
        } else {
            cerr << "Unable to open file";
        }
    };

    void viewRecords(){
        ifstream inFile("studentRecords.csv");
        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
    }    
    }  
};  