//C++ program to implement multiple inputs from the user:

#include<iostream>
using namespace std;

int main() {

    string name;
    int age;

    //Taking multiple inputs using cin
    cin >> name >> age;

    //Printing Output

    cout << "Name: " << name << endl ;
    cout << "Age: " << age << endl ;

    return 0;
}