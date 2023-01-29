#include <iostream>

using namespace std;

float checkCost(string city, string product, int quantity);

main()
{

    string city, product;
    int quantity;

    cout << "ENTER CITY NAME (CAPITAL LETTERS): ";
    cin >> city;
    cout << "ENTER PRODUCT NAME (CAPITAL LETTERS): ";
    cin >> product;
    cout << "ENTER QUANTITY: ";
    cin >> quantity;

    float price = checkCost(city,product,quantity);
    cout<<"PRICE IS: "<<price;

}

float checkCost(string city, string product, int quantity)
{
    float cost;
    if (city == "SOFIA" && product == "COFFEE")
    {
        cost = 0.50 * quantity;
    }
    else if (city == "SOFIA" && product == "WATER")
    {
        cost = 0.80 * quantity;
    }
    else if (city == "SOFIA" && product == "BEER")
    {
        cost = 1.20 * quantity;
    }
    else if (city == "SOFIA" && product == "SWEETS")
    {
        cost = 1.45 * quantity;
    }
    else if (city == "SOFIA" && product == "PEANUTS")
    {
        cost = 1.60 * quantity;
    }
    else if (city == "PLOVDIV" && product == "COFFEE")
    {
        cost = 0.40 * quantity;
    }
    else if (city == "PLOVDIV" && product == "WATER")
    {
        cost = 0.70 * quantity;
    }
    else if (city == "PLOVDIV" && product == "BEER")
    {
        cost = 1.15 * quantity;
    }
    else if (city == "PLOVDIV" && product == "SWEETS")
    {
        cost = 1.30 * quantity;
    }
    else if (city == "PLOVDIV" && product == "PEANUTS")
    {
        cost = 1.50 * quantity;
    }
    else if (city == "VARNA" && product == "COFFEE")
    {
        cost = 0.45 * quantity;
    }
    else if (city == "VARNA" && product == "WATER")
    {
        cost = 0.70 * quantity;
    }
    else if (city == "VARNA" && product == "BEER")
    {
        cost = 1.10 * quantity;
    }
    else if (city == "VARNA" && product == "SWEETS")
    {
        cost = 1.35 * quantity;
    }
    else if (city == "VARNA" && product == "PEANUTS")
    {
        cost = 1.55 * quantity;
    }

    else
    {
        cost = quantity;
    }

    return cost;
}