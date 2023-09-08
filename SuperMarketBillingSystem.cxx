// Super Market Billing System
// by: Anthony Carl Sison

// Features:
// 1. Able to add items
// 2.  Able to remove items
// 3.  Items have product name, number, quantity, and cost.
// 4. Buyer is able to purchase items.
// 5.  Buyer is able to return items.
// 6. This will be a console menu application.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "Welcome to Anthony's Super Market!" << endl;
    bool isOpen = true;

    while (isOpen)
    {
        cout << "Please select one of the following options (1-4)" << endl;

        cout << "1. Add items." << endl;
        cout << "2. Remove items." << endl;
        cout << "3. Purchase items." << endl;
        cout << "4. Return items." << endl;   
           
        int initialMenuChoice;//, quantity;
        //double cost, tax, totalCost;

        cin >> initialMenuChoice;

        switch (initialMenuChoice)
        {
        case 1:
            cout << "What do you want to add?" << endl;
           string productName;
           cin >> productName;
            // ofstream outfile;  
            // outfile.open ("my.txt", ios::out);      
            // outfile << "Hello World" << endl; 
            // outfile << "this is another line" << endl;
            // outfile << "a third line" << endl;
            // outfile.close();
            
            break;

        case 2:
            cout << "What do you want to remove?" << endl;
            break;

        case 3:
            cout << "What do you want to purchase?" << endl;
            break;

        case 4:
            cout << "What do you want to return?" << endl;
            break;

        default:
            cout << "That's not a valid choice." << endl;
            isOpen = false;
        }
    }

    return 0;
}
