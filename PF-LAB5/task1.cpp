#include <iostream>

using namespace std;

char calculateGrade(int marks);

main()
{

    int marks;

    cout << "ENTER THE MARKS: ";
    cin >> marks;

    char grade = calculateGrade(marks);

    cout << grade;

    return 0;
}

char calculateGrade(int marks)
{
    char result;

    if (marks <= 50)
    {
        result = 'F';
    }
    else if (marks >= 51 || marks <= 59)
    {
        result = 'E';
    }
    else if (marks >= 61 || marks <= 69)
    {
        result = 'D';
    }
    else if (marks >= 71 || marks <= 79)
    {
        result = 'C';
    }
    else if (marks >= 81 || marks <= 89)
    {
        result = 'B';
    }
    else if (marks >= 90)
    {
        result = 'A';
    }

    return result;
}