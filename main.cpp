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

 
    return 0;
}