#include <iostream>

// Function declaration
void sayHello();
int add(int a, int b);
double multiply(double a, double b);
void printArray(int arr[], int size);

int main() {
    // Calling a function with no return value
    sayHello();

    // Calling a function with return value
    int sum = add(5, 3);
    std::cout << "Sum: " << sum << std::endl;

    // Calling another function with return value
    double product = multiply(4.5, 2.0);
    std::cout << "Product: " << product << std::endl;

    // Calling a function that takes an array as an argument
    int myArray[] = {1, 2, 3, 4, 5};
    printArray(myArray, 5);

    return 0;
}

// Function definition
void sayHello() {
    std::cout << "Hello, World!" << std::endl;
}

// Function definition with parameters and return value
int add(int a, int b) {
    return a + b;
}

// Another function definition with different parameter types
double multiply(double a, double b) {
    return a * b;
}

// Function definition that takes an array as an argument
void printArray(int arr[], int size) {
    std::cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}