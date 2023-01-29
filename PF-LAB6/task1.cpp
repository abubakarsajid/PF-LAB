#include <iostream>

using namespace std;

int sum();

main()
{

    int add = sum();

    cout <<"SUM OF NATURAL NUMBERS UPTO 100 IS: "<< add;
}

int sum()
{
    int add = 0;
    for (int count = 1; count <= 100; count++)
    {
        add = add + count;
    }
    return add;
}