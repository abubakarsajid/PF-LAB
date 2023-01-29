#include <iostream>
using namespace std;

void printPercentage(int number);

main()
{

    int number;
    cout << "ENTER HOW MANY NUMBERS YOU WANT TO PUT: ";
    cin >> number;

    printPercentage(number);

    return 0;
}


void printPercentage(int number)
{
    double p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    int p1Count = 0, p2Count = 0, p3Count = 0, p4Count = 0, p5Count = 0;
    int no = 0;
    for (int count = 1; count <= number; count++)
    {
        cout << "ENTER NUMBER "<<count<<" : ";
        cin >> no;

        if (no < 200)
        {
            p1Count = p1Count + 1;
        }
        else if (no >= 200 && no <= 399)
        {
            p2Count = p2Count + 1;
        }
        else if (no >= 400 && no <= 599)
        {
            p3Count = p3Count + 1;
        }
        else if (no >= 600 && no <= 799)
        {
            p4Count = p4Count + 1;
        }
        else
        {
            p5Count = p5Count + 1;
        }
    }
    p1=((p1Count*100)/double(number));
    p2=((p2Count*100)/double(number));
    p3=((p3Count*100)/double(number));
    p4=((p4Count*100)/double(number));
    p5=((p5Count*100)/double(number));
    cout <<"PERCENTAGE OF NUMBERS LESS THAN 200: "<< p1 << " %" << endl;
    cout <<"PERCENTAGE OF NUMBERS GREATER THAN 199 & LESS THAN 400: "<<p2 << " %" << endl;
    cout <<"PERCENTAGE OF NUMBERS GREATER THAN 399 & LESS THAN 600: "<<p3 << " %" << endl;
    cout <<"PERCENTAGE OF NUMBERS GREATER THAN 599 & LESS THAN 800: "<<p4 << " %" << endl;
    cout <<"PERCENTAGE OF NUMBERS GREATER THAN 799: "<<p5 << " %" << endl;
}