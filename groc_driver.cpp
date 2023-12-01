/*
Name: Ben Ashir Georges
Professor: Christopher Mills
Year: Fall 2023
Assignment: Programming Assignment 3
Due Date: 10/27/2023
*/

//header files
#include "groceryitem.h"


int main()
{
    // choice variable is used for the menu
    int choice;
    // place variable is used for the while loop
    bool place= false;
    // this is used for the size of the function
    static int size =3;
    // this is used for the total caluclateed at the end
    static double total =0;
    // this is used for the amount the person wants to add
    static int count;
    // this is the array
   GroceryItem* groc = new GroceryItem[size];

    // this is used for to make the money set .00
   cout << setprecision(2) <<fixed<< total;


    cout<<"Welcome to the Grocery List Calculator"<<endl;

    cout<<"_______________________________________________________________"<<endl;
    cout<<"Tip: To select which option you would like to pick enter the number?"<<endl;
    cout<<"_______________________________________________________________"<<endl;

do
{
    cout<<"Would you like to add an item to your Grocery List?(1)"<<endl;
    cout<<"Would you like to remove an item from your Grocery List(2)"<<endl;
    cout<<"Would you like to list whats in your list?(3)"<<endl;
    cout<<"Would you like to check out?(4)"<<endl;
    cout<<"_______________________________________________________________"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;

    // this runs if the user selects 1
    if(choice==1)
    {
       cout<<"How many items would you like to add?";
        cin>>count;
        
        if(size-count<0)
        {
            static int newsize=3;
            // this for loop adds an extra 3 slots to the array list depending on how many slots the person wants to add
            for(int i =0; i<-1*(size-count);i++)
            {
                if(i%3==0)
                {
                    newsize+=3;
                } 

                else
                {
                    newsize+=3;
                }
            }    

            // this line of code replaces the array and makes it bigger
            GroceryItem* newgroc = new GroceryItem[newsize];
            copy(groc, groc +min(size,newsize), newgroc);
            size=newsize;
            delete[] groc;
            groc= newgroc;
            newgroc = NULL;

        }

        for(int i=0;i<count;i++)
        {
            string str;
            double d;
            cout<<"What is the name of the grocery?"<<endl;
            cin>>str;
            groc[i].setName(str);
            cout<<"What is the price of the product?"<<endl;
            cin>>d;
            groc[i].setPrice(d);
        }
        
    }

    // this runs if the user selects 2

    if(choice ==2)
    {
        string name;
        cout<<"Enter the name of the grocery item you would like to remove?"<<endl;
        cin>>name;
         int newsize=size-1;

        for(int i= 0; i<size; i++)
        {
            if(name == groc[i].getName())
            {
               groc[i].setName("");
               groc[i].setPrice(0);
            }

        }
        
    }
    
    // this if statement proceeds if the user selects 3
    if(choice==3)
    {
        // prints out the values
        cout<<"Here is a list"<<endl;
        for(int i =0; i<size;i++)
        {
            // if there is no value in the space it skips it
            if(groc[i].getPrice()==0)
            {

            }

            else{
            cout<<groc[i];
            }
        }
    }

    if(choice==4)
    {
        // adds all the values to total
        for(int i=0; i<size; i++)
        {
            total+=groc[i].getPrice();
        }

        // prints out all the values
        cout<<"The total without tax is "<<total<<endl;
        total=(total*.07)+total;
        cout<<"The total with tax is "<<total<<endl;

        place=true;
    }

    cout<<endl;

}while(place!=true);

    cout<<"Have a nice day!!"<<endl;
    

    return 0;
}