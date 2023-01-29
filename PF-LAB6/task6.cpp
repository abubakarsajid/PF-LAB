#include <iostream>

using namespace std;

int frequencyChecker(int number, int digits);

main()
{

    int number, digits;

    cout << "ENTER NUMBER: ";
    cin >> number;
    cout << "ENTER DIGIT: ";
    cin >> digits;

    int fre = frequencyChecker(number, digits);
    cout<<fre;

}

int frequencyChecker(int number, int digits)
{
    int count = 0;
    int rem;
    int quo;
    while (number > 0)
    {
        rem = number % 10;
        quo = number / 10;

        number = quo;

        if (rem == digits)
        {
            count++;
        }
    }
    return count;

}