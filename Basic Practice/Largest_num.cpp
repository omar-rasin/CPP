//Write a Program to Find the Largest and Smallest Among 3 Numbers

#include<iostream>
using namespace std;

int main() {

    int num1,num2,num3, largest, smallest;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    if(num1>num2 && num1>num3) {

        largest = num1;

    }else if(num2>num1 && num2>num3) {

        largest = num2;

    }else largest = num3;



    if(num1<num2 && num1<num3) {

        smallest = num1;

    }else if(num2<num1 && num2<num3) {

        smallest = num2;

    }else smallest = num3;



    cout << "The largest number is: " << largest << endl;
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}