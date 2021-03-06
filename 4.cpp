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
    int totalRainfallYear;
    float averageMonthlyRainfall;
    
    for (int i = 0; i < MONTHS; i++)
    {
        cout << "Input the details for month #" << (i+1) << endl;
        cout << "Total rainfall: ";
        cin >> details[i].totalRainfall;
        cout << "Highest temperature: ";
        cin >> details[i].highTemp;
        cout << "Lowest temperature: ";
        cin >> details[i].lowTemp;
    }
    
    for (int i = 0; i < MONTHS; i++)
    {
        totalRainfallYear += details[i].totalRainfall;
    }
    
    averageMonthlyRainfall = totalRainfallYear / MONTHS;
    cout << "The average monthly rainfall is " << averageMonthlyRainfall << endl;
    
    //Sort highest temperature
    int highestTemperature = 0;
    int position;
    for (int i = 0; i < MONTHS; i++)
    {
        if (details[i].highTemp > highestTemperature)
        {
            highestTemperature = details[i].highTemp;
            position = i;
        }
    }
    cout << "The highest temperature is " << highestTemperature << " by month #" << (position+1) << endl;
    
    //Sort lowest temperature
    int lowestTemperature = 200;
    int place;
    for (int i = 0; i < MONTHS; i++)
    {
        if (details[i].lowTemp < lowestTemperature)
        {
            lowestTemperature = details[i].lowTemp;
            place = i;
            
        }
    }
    cout << "The lowest temperature is " << lowestTemperature << " in month # " << (place+1) << endl;
    
    int averageTemp;
    averageTemp = (highestTemperature + lowestTemperature) / 2;
    cout << "The average temperature is " << averageTemp << endl;
    
    return 0;
}


/*The program should have an array of 12 structures to hold weather data for an entire year. When the program runs, it should ask the user to enter data for each month. (The average temperature should be calculated.) Once the data are entered for all the months, the program should calculate and display
 the average monthly rainfall
 the total rainfall for the year
 the highest and lowest temperatures for the year (and the months they occurred in)
 and the average of all the monthly average temperatures.
 Input Validation: Only accept temperatures within the range between –100 and +140 degrees Fahrenheit.*/