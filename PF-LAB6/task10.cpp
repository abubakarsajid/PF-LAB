#include <iostream>
#include <cmath>

using namespace std;

float calculatePrice(float money, int year);

main()
{

    float money;
    int year;

    cout << "ENTER INHERITED MONEY (A REAL NUMBER): ";
    cin >> money;

    cout << "ENTER THE YEAR UNTIL WHICH YOU WANT TO LIVE IN PAST [1801...1900]: ";
    cin >> year;

    float amount = calculatePrice(money, year);

    if (amount <= money)
    {
        cout << "YES!!! HE WILL LIVE A CAREFREE LIFE & WILL HAVE " << abs(money - amount)<< " $ LEFT";
    }
    else
    {
        cout << "HE WILL NEED " << abs(money - amount) << " $ TO SURVIVE";
    }

}
float calculatePrice(float money, int year)
{

    // float amount;w
    float totalAmount = 0;

    int rem = year % 100;

    for (int count = 0; count <= rem; count++)
    {
        if (count % 2 == 0)
        {
            totalAmount = totalAmount + 12000;
        }
        else
        {

            totalAmount = totalAmount + 12000 + 50 * (count - 0 + 18);
        }
    }
    return totalAmount;
}