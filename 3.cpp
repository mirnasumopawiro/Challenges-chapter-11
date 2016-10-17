//
//  main.cpp
//  17 oct
//
//  Created by Mirna Sumopawiro on 10/17/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

struct division
{
    float firstQuarterSales;
    float secondQuarterSales;
    float thirdQuarterSales;
    float fourthQuarterSales;
    float totalAnnualSales;
    float averageSales;
};

void getSales (division sales);
//void showSales (division sales);

int main() {
    
    division East;
    getSales (East);
   
    division West;
    getSales (West);
    
    division North;
    getSales (North);
    
    division South;
    getSales (South);
    
    return 0;
}

void getSales (division sales)
{
    cout << "Enter the first quarter sale for the Division ($): ";
    cin >> sales.firstQuarterSales;
    while (sales.firstQuarterSales < 0)
    {
        cout << "Please enter positive numbers for sales: $";
        cin >> sales.firstQuarterSales;
    }
    
    cout << "Enter the second quarter sale for the Division ($): ";
    cin >> sales.secondQuarterSales;
    while (sales.secondQuarterSales < 0)
    {
        cout << "Please enter positive numbers for sales: $";
        cin >> sales.secondQuarterSales;
    }
    
    cout << "Enter the third quarter sale for the Division ($): ";
    cin >> sales.thirdQuarterSales;
    while (sales.thirdQuarterSales < 0)
    {
        cout << "Please enter positive numbers for sales: $";
        cin >> sales.thirdQuarterSales;
    }
    
    cout << "Enter the fourth quarter sale for the Division ($): ";
    cin >> sales.fourthQuarterSales;
    while (sales.fourthQuarterSales < 0)
    {
        cout << "Please enter positive numbers for sales: $";
        cin >> sales.fourthQuarterSales;
    }
    
    sales.totalAnnualSales = sales.firstQuarterSales + sales.secondQuarterSales + sales.thirdQuarterSales + sales.fourthQuarterSales;
    cout << endl;
    cout << setprecision(2) << fixed << endl;
    cout << "The total annual sales for this division is $" << sales.totalAnnualSales << endl;
    cout << "The average sales is $" << sales.totalAnnualSales / 4 << endl;

    
}