//    - Create a program that checks if a number is prime.
#include <iostream>
using namespace std;
#include <string>

bool checkPrime(int n){
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool check = checkPrime(n);
    string output = check ? "True" : "False";
    cout << output << endl;
}







