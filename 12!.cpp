//
//  12.cpp
//  17 oct
//
//  Created by Mirna Sumopawiro on 10/18/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

struct Drink
{
    string name;
    float cost;
    int number;
};

string getDrinkName (int a);

int main ()
{
    const int SIZE = 5;
    Drink list[SIZE];
    
    cout << "Choose a drink\n";
    cout << setprecision(2) << fixed;
    for (int i = 0; i < SIZE;  i++)
    {
        list[i].name = getDrinkName (i);
        if(i<3)
        {
            list[i].cost = 0.75;
        }
        else
        {
            list[i].cost = 0.80;
        }
        
        list[i].number = 20;
    }
    
    for (int i = 0; i < SIZE; i++)
    {
        cout << list[i].name << "\t\t" << list[i].cost << "\t\t" << list[i].number << endl;
    }
    
    return 0;
}

string getDrinkName (int a)
{
    string message= "";
    if (a == 0)
    {
        message = "Coca Cola";
    }
    else if (a == 1)
    {
        message = "Root Beer";
    }
    else if (a == 2)
    {
        message = "Lemon-Lime";
    }
    else if (a == 3)
    {
        message = "Grape Soda";
    }
    else if (a == 4)
    {
        message = "Cream Soda";
    }
    return message;
}