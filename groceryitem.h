/*
Name: Ben Ashir Georges
Professor: Christopher Mills
Year: Fall 2023
Assignment: Programming Assignment 3
Due Date: 10/27/2023
*/

// Header files
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class GroceryItem{
    
    private:
    string name;
    double price;


    public:
    GroceryItem();
    GroceryItem(string name, double price);
    string getName();
    double getPrice();
    void setName(string name);
    void setPrice(double price);
    friend ostream & operator <<(ostream& out, const GroceryItem &c);

};
