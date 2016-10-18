//
//  5.cpp
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

enum Months {JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};

void displayMonthName (Months);

int main ()
{
    const int MONTHS = 12;
    WeatherData details[MONTHS];
    int totalRainfallYear;
    float averageMonthlyRainfall;
    Months i;
    
    for (i = JANUARY; i <= DECEMBER; i = static_cast<Months>(i+1))
    {
        
        cout << "Input the details for ";
        displayMonthName(i);
        cout<<endl;
        for (int i = 0; i<1; i++)
        {
            cout << "Total rainfall: ";
            cin >> details[i].totalRainfall;
            cout << "Highest temperature: ";
            cin >> details[i].highTemp;
            cout << "Lowest temperature: ";
            cin >> details[i].lowTemp;
        }
    }
    
    cout << details[3].totalRainfall;
    for (i = JANUARY; i <= DECEMBER; i = static_cast<Months>(i+1))
    {
        totalRainfallYear += details[i].totalRainfall;
    }
    
    averageMonthlyRainfall = totalRainfallYear / MONTHS;
    cout << "The average monthly rainfall is " << averageMonthlyRainfall << endl;
    
    //Sort highest temperature
    int highestTemperature = 0;
    for (int i = 0; i < MONTHS; i++)
    {
        if (details[i].highTemp > details[i+1].highTemp)
        {
            highestTemperature = details[i].highTemp;
            details[i].highTemp = details[i+1].highTemp;
            details[i+1].highTemp = highestTemperature;
            
        }
    }
    cout << "The highest temperature is " << highestTemperature << " in month # "  << endl;
    
    //Sort lowest temperature
    int lowestTemperature = 0;
    for (int i = 0; i < MONTHS; i++)
    {
        if (details[i].lowTemp < details[i+1].lowTemp)
        {
            lowestTemperature = details[i].lowTemp;
            details[i].lowTemp = details[i+1].lowTemp;
            details[i+1].lowTemp = lowestTemperature;
            
        }
    }
    cout << "The lowest temperature is " << lowestTemperature << " in month # " << endl;
    
    int averageTemp;
    averageTemp = (highestTemperature + lowestTemperature) / 2;
    cout << "The average temperature is " << averageTemp << endl;
    
    return 0;
}

void displayMonthName (Months m)
{
    switch (m)
    {
        case JANUARY: cout << "January";
            break;
        case FEBRUARY: cout << "February";
            break;
        case MARCH: cout << "March";
            break;
        case APRIL: cout << "April";
            break;
        case MAY: cout << "May";
            break;
        case JUNE: cout << "June";
            break;
        case JULY: cout << "July";
            break;
        case AUGUST: cout << "August";
            break;
        case SEPTEMBER: cout << "September";
            break;
        case OCTOBER: cout << "October";
            break;
        case NOVEMBER: cout << "November";
            break;
        case DECEMBER: cout << "December";
            break;
    }
}
