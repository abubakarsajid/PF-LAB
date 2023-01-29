#include <iostream>
#include <cmath>

using namespace std;

int totalPlayed(string year, int holidays, int weekends);

main()
{

    string year;
    int holidays, weekends;

    cout << "ENTER THE YEAR TYPE (LEAP OR NORMAL): ";
    cin >> year;
    cout << "ENTER THE NO OF HOLIDAYS (NOT SATURDAY OR SUNDAY): ";
    cin >> holidays;
    cout << "ENTER THE NO OF WEEKENDS: ";
    cin >> weekends;

    int total = totalPlayed(year, holidays, weekends);

    cout << "VLADMIR PLAYS VOLLEYBALL ON " << total << " HOLIDAYS THROUGHOUT THE YEAR ";
}

int totalPlayed(string year, int holidays, int weekends)
{
    float playingHolidays = ((holidays * 2 / 3));
    float playingWeekends = (((48 - weekends) * 3) / 4);
    float playingVolley = playingWeekends + playingHolidays + weekends;

    if (year == "LEAP")
    {
        playingVolley = (playingVolley + ((playingVolley * 15) / 100));
    }
    else if (year == "NORMAL")
    {
        playingVolley;
    }
    int allPlayed = ceil(playingVolley);
    return allPlayed;
}