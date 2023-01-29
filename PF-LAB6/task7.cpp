#include <iostream>

using namespace std;

int digitSum(int num);

main()
{

    int num;

    cout << "ENTER NUMBER: ";
    cin >> num;

    cout<<digitSum(num);

        return 0;
}

int digitSum(int num)
{

    int rem = 0;
    int quo = 0;
    int sum =0;
    while (num > 0)
    {

        rem = num % 10;
        quo = num / 10;

        sum=rem+sum;
        num = quo;
    }
    return sum;
}
