#include <iostream>

using namespace std;

bool similarNumber(int number1, int number2, int number3);

main()
{

    int number1, number2, number3;

    cout << "ENTER FIRST NUMBER: ";
    cin >> number1;
    cout << "ENTER SECOND NUMBER: ";
    cin >> number2;
    cout << "ENTER THIRD NUMBER: ";
    cin >> number3;

    similarNumber(number1, number2, number3);
}

bool similarNumber(int number1, int number2, int number3)
{

    if (number1 == number2 && number1 == number3)
    {
        cout << "SAME";
    }
    else
    {
        cout << "DIFFERENT";
    }

    return 0;
}