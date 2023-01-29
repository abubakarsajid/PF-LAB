#include <iostream>

using namespace std;

main()
{

    int add = 0;
    int number = 0;

    int prev = 0, next = 1;

    cout << "ENTER THE NO AT WHICH YOU WANT TO SEE FIBONNACI NO: ";
    cin >> number;

    cout << prev << "," << next ;

    for (int i = 1; i <= number - 2; i++)
    {
        add = prev + next;
        cout << "," << add;
        prev = next;
        next = add;
    }

    
}