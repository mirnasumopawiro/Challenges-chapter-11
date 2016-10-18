//
//  6.cpp
//  17 oct
//
//  Created by Mirna Sumopawiro on 10/17/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

struct playerData
{
    string name;
    int number;
    int points;
};

int main ()
{
    const int NUM_PLAYER = 12;
    playerData input[NUM_PLAYER];
    
    for (int i = 0; i < NUM_PLAYER; i++)
    {
        cout << "Enter the data for player #" << (i+1) << endl;
        cout << "Name: ";
        cin >> input[i].name;
        cout << "Number: ";
        cin >> input[i].number;
        cout << "Point: ";
        cin >> input[i].points;
    }
    
    cout << "Player name: " << "\t\t"  << "Player number:" << "\t\t" << "Points:" << endl;
    for (int i = 0; i < NUM_PLAYER; i++)
    {
        cout << input[i].name << "\t\t\t\t\t" << input[i].number << "\t\t\t\t\t" << input[i].points << endl;
    }
    
    int totalPoints = 0;
    for (int i = 0; i < NUM_PLAYER; i++)
    {
        totalPoints += input[i].points;
    }
    cout << "The team total points is " << totalPoints << endl;
    
    //Sort highest points
    int highestPoint = 0;
    int position;
    for (int i = 0; i < NUM_PLAYER; i++)
    {
        if (input[i].points > highestPoint)
        {
            highestPoint = input[i].points;
            position = i;
        }
    }
    cout << "The highest point is " << highestPoint << " by " << input[position].name << endl;
    return 0;
}
