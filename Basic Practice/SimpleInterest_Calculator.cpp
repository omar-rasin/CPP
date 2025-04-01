#include<iostream>
using namespace std;

int main() {

    //Declaring Variables
    float principle, rate, time;

    cout << "Enter your current principle amount: " ;
    cin >> principle;

    cout << "Enter the rate of interest : " ;
    cin >> rate;

    cout << "Enter the time in years: ";
    cin >> time;

    float percent_rate = rate / 100 ;

    //Calculating Simple interest

    float simple_interest = (principle*percent_rate*time);

    float total_amount = principle + simple_interest;

    cout << "The amount received in interest is: " << simple_interest << endl;
    cout << "The Total amount is: " << total_amount << endl;


}