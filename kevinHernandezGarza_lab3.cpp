//******************************************************************
// Author: Kevin Hernandez-Garza
// Assignment Number: Programming Assignment "2"
// File Name: hernandezGarza.Lab2.cpp
// Course/Section: COSC 1337 Section -009
// Due Date: 2/25/23
// Instructor: Dr.Haytham Mohamed
//
// This program determines which company's four divisions(Northeast, Southeast, Northwest, and Southwest) had the greatest sales for a quarter. It includes two functions that are called by the main function.
//  ******************************************************************

// maybe create an array that contains the four division and iterate the array to get their values.

#include <iostream>
using namespace std;

// function prototype
int getSales(string);
void getHighest(int, int, int, int);

// main function
int main()
{
    // sales[] = {northWest, southWest, northEast, southEast};
    int nw, sw, ne, se;
    /*
    asking the user for each division sale
    return values to insert as parameter in
    findHighest function
    */
    nw = getSales("northWest");
    sw = getSales("southWest");
    ne = getSales("northEast");
    se = getSales("southEast");

    // finding the highest sales
    // takes is 4 parameters
    getHighest(nw, sw, ne, se);

    return 0;
}

/*
function definitions for sales and
finding the highest sales
*/
int getSales(string division)
{
    int sales;

    cout << "What were the quarterly sale for " << division << " division: " << endl;

    cin >> sales;

    while (sales < 0)
    {
        cout << "CANNOT BE NEGATIVE! TRY AGAIN! " << endl;
        int getSales(string division);
    }
    return sales;

    /*
    for (int i = 0; i > 3; i++)
    {
        if (sales[i] >= 0)
        {
            cout << "What were the quarterly sales for " << endl;
            cin >> sales[i];
        }
    else
        getSales()
    }
    */
}

/*
for finding highest value
int sales[]= {sale1, sale2, sale3, sale4}
assume first element from sales is highest and test it
*/
void getHighest(int nw, int sw, int ne, int se)
{
    /*int max = 0;

    max = sales[0];

    int max[0];

    for (i = 0; i < 3; i++)
    {
        if (sales[i] > max)
            max = sales[i]
    }*/

    int max = 0;
    string division;

    cout << "The highest division is " << division << " with " << max << " in sales!";
}
