#include <iostream>
using namespace std;
int main() {
    int x = 10;//The variable we are looking to point too
	int* xptr = &x;//using "&" you get the momory location of the variable x and you are telling xptr to point to x's location.
	cout << xptr << endl;//prints to location it's pointing too
	cout << &x << endl;//If you did it correctly it will output the same thing as xptr
	cout << *xptr << endl;//It will print the value(10) of the variable its pointing too. this is called derefrencing
	cout << x << endl;//It will print 10.

    // Declaring an integer variable
    int var = 42;

    // Declaring a pointer to an integer and initializing it to the address of var
    int* varptr = &var;

    // Output the value of var using the pointer
    cout << "Value of var: " << var << endl;
    cout << "Value of var using pointer: " << *varptr << endl;

    // Output the address of var
    cout << "Address of var: " << &var << endl;
    cout << "Address stored in pointer: " << varptr << endl;

    // Dynamic memory allocation
    int* dynamicPtr = new int; // Allocate memory for an integer
    *dynamicPtr = 100; // Assign a value to the allocated memory

    // Output the value and address of the dynamically allocated memory
    cout << "Value of dynamically allocated memory: " << *dynamicPtr << endl;
    cout << "Address of dynamically allocated memory: " << dynamicPtr << endl;

    // Deallocate the dynamically allocated memory
    delete dynamicPtr;

    // Dynamic memory allocation for an array
    int size = 5;
    int* arrayPtr = new int[size]; // Allocate memory for an array of integers

    // Assign values to the array
    for (int i = 0; i < size; ++i) {
        arrayPtr[i] = i * 10;
    }

    // Output the values and addresses of the array elements
    for (int i = 0; i < size; ++i) {
        cout << "Value of array element " << i << ": " << arrayPtr[i] << endl;
        cout << "Address of array element " << i << ": " << &arrayPtr[i] << endl;
    }

    // Deallocate the dynamically allocated array
    delete[] arrayPtr;

    return 0;
}