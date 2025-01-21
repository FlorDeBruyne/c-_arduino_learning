//    - Write a program to calculate the sum of an array.
#include <iostream>
#include <string>

using namespace std;


float calculateArraySum(float arr[], int size){
    float sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

//    - Write a program to find the maximum element in an array.
struct ArrayElement{
    double value;
    int position;
};

ArrayElement findMaxElement(double arr[], int size){
    ArrayElement arrayElement;
    arrayElement.value = arr[0];
    arrayElement.position = 0;
    for (int i = 1; i < size; i++){
        if (arr[i] > arrayElement.value){
            arrayElement.value = arr[i];
            arrayElement.position = i;
        }
    }
    return arrayElement;
}

//    - Write a program to find the minmum element in an array.
ArrayElement findMinElement(double arr[], int size){
    ArrayElement arrayElement;
    arrayElement.value = arr[0];
    arrayElement.position = 0;
    for (int i = 1; i < size; i++){
        if (arr[i] < arrayElement.value){
            arrayElement.value = arr[i];
            arrayElement.position = i;
        }
    }
    return arrayElement;
}

int main(){
    float arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    cout << "Length of the array: " << sizeof(arr) << endl;
    cout << "Size of the array: " << sizeof(arr[0]) << endl;

    float sum = calculateArraySum(arr, sizeof(arr)/sizeof(arr[0]));
    cout << "Sum of the array: " << sum << endl;

    double max_arr[] = {10, 20, 50, 60, 30, 40, 70, 80, 90, 100};
    ArrayElement max_element = findMaxElement(max_arr, sizeof(max_arr)/sizeof(max_arr[0]));
    cout << "Max element in the array: " << max_element.value << " At position: " << max_element.position  << endl;

    double min_arr[] = {1, 2, 5, 8, 9, 11, 0};
    ArrayElement min_element = findMinElement(min_arr, sizeof(min_arr)/sizeof(min_arr[0]));
    cout << "Min element in the array: " << min_element.value << " At position: " << min_element.position << endl;
}
