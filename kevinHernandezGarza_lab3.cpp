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

#include <iostream>
#include <string>

using namespace std;

// function prototypes
int getSales(string);
void getHighest(int, int, int, int);

// main function
int main()
{
    string divisions[4] = {"Northwest", "Southwest", "Northeast", "Southeast"};
    int nw, sw, ne, se;

    cout << "********************************" << endl
         << "DO NOT INPUT NEGATIVE NUMBERS," << endl
         << "IF SO THE PROGRAM WILL" << endl
         << "NOT PROCEED UNTIL YOU DO SO" << endl
         << "********************************" << endl;

    nw = getSales(divisions[0]);
    cout << "The sales for the " << divisions[0] << " division is $" << nw << endl;
    sw = getSales(divisions[1]);
    cout << "The sales for the " << divisions[1] << " division is $" << sw << endl;
    ne = getSales(divisions[2]);
    cout << "The sales for the " << divisions[2] << " division is $" << ne << endl;
    se = getSales(divisions[3]);
    cout << "The sales for the " << divisions[3] << " division is $" << se << endl;

    // takes is 4 parameters to find the highest value
    getHighest(nw, sw, ne, se);

    return 0;
}

// this function asks the user for the amount of the sales for a particular division
int getSales(string division)
{
    int sales;

    cout << "What were the quarterly sale for " << division << " division: " << endl
         << endl;

    // validation, if user inputs negative number it will not proceed
    do
    {
        cin >> sales;
    } while (sales < 0);

    // returns sales integer
    return sales;
}

// this function finds the highest integer by comparing each division
void getHighest(int nw, int sw, int ne, int se)
{
    int max;
    string division;

    if (nw > sw && nw > ne && nw > se)
    {
        max = nw;
        division = "Northwest";
    }
    else if (sw > nw && sw > se && sw > ne)
    {
        max = sw;
        division = "Southwest";
    }
    else if (ne > sw && ne > nw && ne > se)
    {
        max = ne;
        division = "Northeast";
    }
    else
    {
        max = se;
        division = "Southeast";
    }

    cout << endl
         << "The highest division is " << division << " with $" << max << " in sales!";
}