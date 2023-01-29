#include <iostream>

using namespace std;

string checkSpeed(int speed);

main()
{
    int speed;

    cout<<"ENTER SPEED: ";
    cin>>speed;

    cout<<"You Are Going "<<checkSpeed(speed);

    return 0;
}

string checkSpeed(int speed)
{

    string velocity;

    if (speed >= 0 || speed <= 10)
    {
        velocity = "slow";
    }

    else if (speed >= 10 || speed <= 50)
    {
        velocity = "average";
    }

    else if (speed >= 50 || speed <= 100)
    {
        velocity = "fast";
    }

    else if (speed >= 100 || speed <= 1000)
    {
        velocity = "ultra fast";
    }

    else
    {
        velocity = "INVALID INPUT";
    }

    return velocity;
}