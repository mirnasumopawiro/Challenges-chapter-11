//
//  1.cpp
//  17 oct
//
//  Created by Mirna Sumopawiro on 10/17/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//


#include <iostream>
#include <iomanip>
using namespace std;

struct MovieData
{
    string Title;
    string Director;
    int YearReleased;
    int RunningTime;
};

void ShowData (MovieData MovieDetails);

int main() {
    
    
    
    MovieData movie1 = { "Titanic", "Jill", 1962, 150 };
    MovieData movie2 = { "The Exorcist", "Mozart", 1978, 200 };
    
    ShowData (movie1);
    ShowData (movie2);
    
    
    return 0;
}

void ShowData (MovieData MovieDetails)
{
    cout << "Here are the details of the movie\n";
    cout << "Title: " << setw(10) << left << MovieDetails.Title << endl;
    cout << "Director: " << setw(10) << left << MovieDetails.Director << endl;
    cout << "Year Released: " << setw(10) << left << MovieDetails.YearReleased << endl;
    cout << "Running Time: " << setw(10) << left << MovieDetails.RunningTime << endl;
    cout << endl;

}