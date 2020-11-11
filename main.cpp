//Clayton Arndt
//11/11/2020
//CS201

#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <numeric>

using std::string;
using std::map;
using std::cout;
using std::cin;
using std::streamsize;
using std::endl;
using std::numeric_limits;



struct Record
{
    double unitPrice;
    int units;
};

int main()
{
    map<string, Record> cart, itemsAvailable = {
            {"Shampoo",{23.12,6}},
            {"Hair Oil",{42.12,5}},
            {"Rice",{13.12,8}},
            {"ToothPaste",{12.12,4}},
            {"Shaving Gel",{73.12,5}}
    };

    while (true)
    {
        cout << "\nItems Available\n";
        for (auto element : itemsAvailable)
        {
            cout << element.first << " " << element.second.unitPrice << " " << element.second.units << endl;
        }
        cout << "\n****** Menu ******";
        cout << "\n1. Add Items to the cart";
        cout << "\n2. Remove Items to the cart";
        cout << "\n3. Display Items in the cart";
        cout << "\n4. Exit";
        cout << "\n Enter you choice : ";
        int choice;
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');


        switch (choice)
        {
            case 1:
            {
                cout << "\n Enter the item name : ";
                string name;
                getline(cin, name);

                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "\nEnter the item units : ";
                int units;
                cin >> units;

                if (itemsAvailable.find(name) != itemsAvailable.end())
                {
                    //Subtract the units from item available
                    cart[name] = { itemsAvailable[name].unitPrice,units };
                    itemsAvailable[name].units -= units;
                }

            }
            

    return 0;
}