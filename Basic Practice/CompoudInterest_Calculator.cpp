#include<iostream>
#include<cmath>

using namespace std;

int main() {

    //Declaring Variables
    float total, principle, rate, time, interest;

    cout << "Enter your current amount: ";
    cin >> principle;

    cout << "Enter the rate of compound interest: ";
    cin >> rate;

    cout << "Enter the time in years: ";
    cin >> time;

    //Using compount interest formula

    total = principle * pow((1+(rate/100)) , time);
    
    interest = total - principle;

    cout << "The amount of compount interest received is: " << interest << endl;
    cout << "The total amount in the account is: " << total << endl;

    return 0;
}