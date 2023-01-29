#include <iostream>

using namespace std;

float lowestPrice(int kilometers, string period);

main()
{

    int kilometers;
    string period;

    cout << "ENTER KILOMETERS: ";
    cin >> kilometers;
    cout << "ENTER PERIOD OF DAY ('day , night'): ";
    cin >> period;

    cout << "Lowest Price Is " << lowestPrice(kilometers, period);

    return 0;
}

float lowestPrice(int kilometers, string period)
{
    float uberDay = 0.79;
    float uberNight = 0.90;
    float orangeLine = 0.06;
    float bus = 0.09;

    float price;

    if (kilometers < 20 && period == "day")
    {

        price = 0.7 + (uberDay * kilometers);
    }
    else if (kilometers < 20 && period == "night")
    {

        price = 0.7 + (uberNight * kilometers);
    }

    else if (kilometers >= 20 && kilometers <100)
    {
        price = bus * kilometers;
    }

    else if (kilometers >= 100)
    {
        price = orangeLine * kilometers;
    }
    else{
         price = kilometers; 
    }
    return price;
}