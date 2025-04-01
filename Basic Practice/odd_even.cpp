//Write a Program to Check Even or Odd Integers

#include<iostream>
using namespace std;

int main() {


    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if(num%2==0) {

        printf("%d is an even number", num);

    }else if(num%2 != 0 ) {

        printf("%d is a odd number", num);
    }

    return 0;
}