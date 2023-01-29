#include <iostream>

using namespace std;

int totalDigits(int no);

main()
{

    int no;

    cout << "ENTER NUMBER: ";
    cin >> no;

    cout << totalDigits(no);
}

int totalDigits(int no)
{
    

    int i = 0;

    while (no > 0)
    {
        no = no / 10;
        i = i + 1;
    }
        return i;
}