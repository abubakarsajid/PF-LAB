#include <iostream>

using namespace std;

float calculateMoney(int age, int machinePrice, int toyPrice);

main()
{

    int age, machinePrice, toyPrice;

    cout << "ENTER YOUR AGE: ";
    cin >> age;

    cout << "ENTER WASHING MACHINE PRICE: ";
    cin >> machinePrice;

    cout << "ENTER THE UNIT PRICE OF EACH TOY: ";
    cin >> toyPrice;

    int totalMoney = calculateMoney(age, machinePrice, toyPrice);

    if (totalMoney >= machinePrice)
    {
        int remaining = totalMoney - machinePrice;
        cout << "YES!! YOU CAN BUY THE MACHINE & YOU HAVE " << remaining << " $ REMAINING";
    }
    else
    {
        int remaining = machinePrice - totalMoney;
        cout << "SORRY!! YOU CANNOT BUY THE MACHINE & YOU NEED " << remaining << " $ ";
    }
}

float calculateMoney(int age, int machinePrice, int toyPrice)
{
    int savedMoney = 9;
    int oddNumbers, evenNumbers;
    int totalMoney = 0;
    int count = 0;
    int save = 0;
    int totalSavedMoney = 0;
    if (age % 2 == 0)
    {
        oddNumbers = age / 2;
        evenNumbers = age / 2;
        toyPrice = oddNumbers * toyPrice;
        while(count<evenNumbers){
            save=save+savedMoney;
            totalSavedMoney=totalSavedMoney+savedMoney;
            savedMoney=savedMoney+10;
            count++;
        }
        totalMoney = save + toyPrice;
    }
    else
    {
        oddNumbers = (age / 2) - 1;
        evenNumbers = age - oddNumbers;
        toyPrice = oddNumbers * toyPrice;
            while(count<=evenNumbers){
            save=save+savedMoney;
            totalSavedMoney=totalSavedMoney+savedMoney;
            savedMoney=savedMoney+10;
            count++;
        }
        totalMoney = save + toyPrice;
    }
    return totalMoney;
}