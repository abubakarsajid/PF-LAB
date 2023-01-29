#include <iostream>

using namespace std;

// void discount (int price , string brandName);
// void isGreatest(int number1 , int number2 , int number3);
int isGreatest(int number1, int number2, int number3);
main()
{

    
    int number1, number2, number3;

    cout << "ENTER THE FIRST NUMBER: ";
    cin >> number1;

    cout << "ENTER THE SECOND NUMBER: ";
    cin >> number2;

    cout << "ENTER THE THIRD NUMBER: ";
    cin >> number3;

    cout << isGreatest(number1, number2, number3);
}


int isGreatest(int number1, int number2, int number3)
{
    int great;
    if (number1 > number2 && number1 > number3)
    {
        great = number1;
    }
    else if (number2 > number1 && number2 > number3)
    {
        great = number2;
    }
    else if (number3 > number1 && number3 > number2)
    {
        great = number3;
    }
    else
    {
        great=0;
    }
    return great;
}