//
//  15.cpp
//  17 oct
//
//  Created by Mirna Sumopawiro on 10/18/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
using namespace std;

union firstVariable
{
    int hoursWorked;
    int salary;
};

union secondVariable
{
    int hourlyRate;
    int bonus;
};

struct HourlyPaid
{
    int hoursWorked; //HoursWorked
    int hourlyRate; // HourlyRate
};

struct Salaried
{
    int salary; //salary
    int bonus; // bonus
};

int main()
{
    firstVariable data1;
    secondVariable data2;
    int totalPay;
    char choice;
    cout << "Enter H for hourly-paid employee or S for salary-paid employee: ";
    cin >> choice;
    
    if (choice == 'H' || choice == 'h')
    {
        cout << "How many hours did the employee worked? ";
        cin >> data1.hoursWorked;
        while (data1.hoursWorked <= 0 || data1.hoursWorked > 80)
        {
            cout << "Enter a positive number that is less than 80." << endl;
            cin >> data1.hoursWorked;
        }
        cout << "What is the hourly rate? ";
        cin >> data2.hourlyRate;
        while (data2.hourlyRate <= 0)
        {
            cout << "Enter a positive number." << endl;
            cin >> data2.hourlyRate;
        }
        
        totalPay = data1.hoursWorked * data2.hourlyRate;
        cout << "The total pay is $" << totalPay << endl;
    }
    else if (choice == 'S' || choice == 's')
    {
        cout << "How much is the salary? ";
        cin >> data1.salary;
        while (data1.salary <= 0)
        {
            cout << "Enter a positive number." << endl;
            cin >> data1.salary;
        }
        cout << "How  much is the bonus? ";
        cin >> data2.bonus;
        while (data2.bonus <= 0)
        {
            cout << "Enter a positive number/" << endl;
            cin >> data2.bonus;
        }
        
        totalPay = data1.salary + data2.bonus;
        cout << "The total pay is $" << totalPay << endl;
    }
    
    
    return 0;
}
