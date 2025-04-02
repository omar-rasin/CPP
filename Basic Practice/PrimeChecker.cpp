//Write a program to check if a number is prime or not

#include<iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int count = 0; 

    for(int i = 1 ; i< (num/2); i++) {

        if(num % i == 0) {

            count ++;
        }
    }

    if(count > 1) {

        printf("%d is not a prime number", num);

    }else printf("%d is a prime number", num);
}