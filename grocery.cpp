/*
Name: Ben Ashir Georges
Professor: Christopher Mills
Year: Fall 2023
Assignment: Programming Assignment 3
Due Date: 10/27/2023
*/

//header files
#include "groceryitem.h"

// Getter function for name
 string GroceryItem::getName()
{
    return name;
}

// getter function for price
double GroceryItem:: getPrice() 
{
    return price;
}

// setter function for name
void GroceryItem:: setName(string name)
{
    this->name = name;
}

// setter function for price
void GroceryItem:: setPrice(double price)
{
    this->price = price;
}

GroceryItem::GroceryItem(string name, double price)
{
    this->name=name;
    this->price=price;
}

/*
    Overloads the insertion operator so i can print out the 
    thing
*/
 ostream & operator <<(ostream& out, const GroceryItem &c)
{   
    out<<"Name: "<< c.name<<endl;
    out<<"Price: $"<<c.price<<endl;
    return out;        
}

GroceryItem::GroceryItem()
{
    this->name;
    this->price;
}