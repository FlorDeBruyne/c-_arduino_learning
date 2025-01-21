//    - Write a program that reverses a string.
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


string reveseString(string s){
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}


int main(){
    string s;
    cout << "Enter a string to reverse: ";
    cin >> s;

    cout << "Reversed string: " << reveseString(s) << endl;
    
    return 0;
}


