/* Chapter02_Q8.cpp
Duarte, Cameryn
CSC119-142 Introduction to Programming C++ Spring 2021
02/02/2021
This program calculates the number of widgets stacked on a pallet.
*/
//tells the program to include iostream header file because it contains input and output functions
#include <iostream> 
//used to differentiate similar functions
using namespace std;
//declaring main function
int main()
{
//declaring constant
    const double widgetweight = 12.5; 
//declaring variables
    double palletweight, PalWidweight, widgetamount, widtotal; 
//explaining to user what program does
    cout<< "This program calculates the total number of widgets stacked on a pallet." << endl << endl; 
//asking for user input
    cout<< "Enter pallet weight: "; 
//user input being assigned to variable
    cin>> palletweight; 
    cout<< endl;
//asking user input again
    cout<< "Enter pallet weight with widgets stacked on top: ";
//user input being assigne to variable again
    cin>> PalWidweight;
    cout<< endl;
//processing user input and constants
    widtotal = PalWidweight - palletweight; 
    widgetamount = widtotal / widgetweight; 
//output
    cout<< "The number of widgets is: " << widgetamount << endl; 

//signaling the end of the program
    return 0;
}
