//
//  4.cpp
//  17 oct
//
//  Created by Mirna Sumopawiro on 10/17/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

struct WeatherData
{
    float totalRainfall;
    float highTemp;
    float lowTemp;
    float averageTemp;
};

int main ()
{
    const int MONTHS = 12;
    WeatherData details[MONTHS];
    
    cout << "Enter the Weather Data for " << MONTHS << "months\n";
    
    for (int i = 0; i < MONTHS; i++)
    {
        cout << "Total rainfall for month " << (i+1) << ": ";
        cin >> details[i].totalRainfall;
        cout << "Highest temperature in month " << (i+1) << ": ";
        cin >> details[i].highTemp;
        cout << "Lowest temperature in month " << (i+1) << ": ";
        cin >> details.[i].lowTemp;
    }
    
    cout << setprecision(2) << fixed;
    
    for (int i = 0; i < MONTHS; i++)
    {
        avera
    }
    
    
    return 0;
}
