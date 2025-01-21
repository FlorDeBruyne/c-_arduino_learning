#include <iostream>
#include <string>
#include <optional>
using namespace std;
// A class is a blueprint for creating objects. It defines a type by bundling data and methods that work on the data.
class Car {
private:
    // Private attributes (or member variables)
    string brand;
    string model;
    optional<int> year;

public:
    // Constructor: A special method that is automatically called when an object is created
    Car(string b, string m, int y) : brand(b), model(m), year(y) {}

    // Overloaded constructor with optional attributes
    Car(string b, string m) : brand(b), model(m), year(nullopt) {}


    string getBrand(){
        return brand;
    }

    string getModel(){
        return model;
    }

    optional<int> getYear(){
        return year;
    }

    void setBrand(string b){
        brand = b;
    }

    void setModel(string m){
        model = m;
    }

    void setYear(int y){
        year = y;
    }

    // Method: A function that is defined inside a class
    void displayInfo() {
        cout << "Brand: " << brand << ", Model: " << model;
        if (year.has_value()) {
            cout << " Year: " << year.value() << endl;
        } else {
            cout << " Year: Not specified" << endl;
        }
    }
};

int main() {
    // Creating objects (instances of a class)
    Car car1("Toyota", "Corolla", 2020);
    Car car2("Honda", "Civic", 2019);
    Car car3("BMW", "X5");
    Car car4("Aston Martin", "DB11");

    // Accessing attributes and methods
    car1.displayInfo();
    car2.displayInfo();
    car3.displayInfo();
    car4.displayInfo();
    car4.setYear(1970);
    car4.displayInfo();

    return 0;
}