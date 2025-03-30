//Write a Program to Find the Size of int, float, double, and char

#include<iostream>
using namespace std;

int main() {

    //declaring variables

    int integerType;
    char charType;
    float floatType;
    double doubleType;

    cin >> integerType >> charType >> floatType >> doubleType ; 

    cout << "The size of integer is: " << sizeof(integerType) << endl;
    cout << "The size of Character is: " << sizeof(charType) << endl;
    cout << "The size of Float is: " << sizeof(floatType) << endl;
    cout << "The size of Double is: " << sizeof(doubleType) << endl;

    return 0;
}
