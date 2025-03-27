//Write a Program to Print the ASCII Value of a Character

#include<iostream>
using namespace std;

int main () {

    //Initializing a char variable
    char c;

    cin >> c ;

    //Outputting Ascii

    cout << "The ASCII value of " << c << " is: " << int(c) <<endl;

    return 0;
}