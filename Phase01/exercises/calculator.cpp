//    - Build a simple calculator for addition, subtraction, multiplication, and division.
#include <iostream>
using namespace std;


float addition(float a, float b) {
    return a +b;
}


float substraction(float a, float b) {
    return a - b;
}


float multiplication(float a, float b){
    return a * b;
}


float division(float a, float b){
    return a / b;
}


int main() {

    float a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    cout << "Addition: " << addition(a, b) << endl;
    cout << "Substraction: " << substraction(a, b) << endl;
    cout << "Multiplication: " << multiplication(a, b) << endl;
    cout << "Division: " << division(a, b) << endl;

    return 0;
}