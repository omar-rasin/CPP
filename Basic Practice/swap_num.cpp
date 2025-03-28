//Swap two numbers using a temporary variable

#include<iostream>
using namespace std;

int main() {

    int a,b;

    cin >> a >> b;

    cout<< "Before swapping: \n a = " << a << "\n b = " << b << endl; 

    //Swapping

    int temp = a;
    a = b;
    b = temp;

    cout<< "After swapping: \n a = " << a << "\n b = " << b << endl; 

    
}