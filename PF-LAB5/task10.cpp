#include <iostream>
#include <cmath>

using namespace std;

float amountLeft(float budget, string category, int noOfPeople);

main()
{

    float budget;
    string category;
    int noOfPeople;

    cout << "ENTER YOUR BUDGET [1000.00 ... 1000000.00]: ";
    cin >> budget;

    cout << "ENTER THE CATEGORY (VIP OR NORMAL): ";
    cin >> category;

    cout << "ENTER NUMBER OF PEOPLE [1..200]: ";
    cin >> noOfPeople;

    float amount = amountLeft(budget, category, noOfPeople);


    if(amount>=0){

    cout << "YOU HAVE "<<amount<<" QR LEFT";
    }
    else{
    cout<<"NOT ENOUGH MONEY! YOU NEED "<<abs(amount);
    }

    return 0;
}

float amountLeft(float budget, string category, int noOfPeople)
{

    float oneVip = 499.99;
    float oneNormal = 249.99;
    float amount = budget;

    if ((noOfPeople >= 1 && noOfPeople <= 4) && category == "VIP")
    {

        amount = ((budget - (budget * 0.75)) - (noOfPeople * oneVip));
    }
    else if ((noOfPeople >= 1 && noOfPeople <= 4) && category == "NORMAL")
    {

        amount = ((budget - (budget * 0.75)) - (noOfPeople * oneNormal));
    }

    else if ((noOfPeople >= 5 && noOfPeople <= 9) && category == "VIP")
    {

        amount = ((budget - (budget * 0.60)) - (noOfPeople * oneVip));
    }
    else if ((noOfPeople >= 5 && noOfPeople <= 9) && category == "NORMAL")
    {

        amount = ((budget - (budget * 0.60)) - (noOfPeople * oneNormal));
    }

    else if (noOfPeople >= 10 && noOfPeople <= 24 && category == "VIP")
    {

        amount = ((budget - (budget * 0.50)) - (noOfPeople * oneVip));
    }
    else if (noOfPeople >= 10 && noOfPeople <= 24 && category == "NORML")
    {

        amount = ((budget - (budget * 0.50)) - (noOfPeople * oneNormal));
    }

    else if (noOfPeople >= 25 && noOfPeople <= 49 && category == "VIP")
    {

        amount = ((budget - (budget * 0.40)) - (noOfPeople * oneVip));
    }
    else if (noOfPeople >= 25 && noOfPeople <= 49 && category == "NORMAL")
    {

        amount = ((budget - (budget * 0.40)) - (noOfPeople * oneNormal));
    }
    else if (noOfPeople >= 50 && category == "VIP")
    {

        amount = ((budget - (budget * 0.25)) - (noOfPeople * oneVip));
    }
    else if (noOfPeople >= 50 && category == "NORMAL")
    {

        amount = ((budget - (budget * 0.25)) - (noOfPeople * oneNormal));
    }
    else
    {
        amount;
    }

    return amount;
}