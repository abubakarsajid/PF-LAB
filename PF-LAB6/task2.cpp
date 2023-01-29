#include <iostream>

using namespace std;

int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);

main()
{
    int number1, number2, gcd,lcm;

    cout << "ENTER FIRST NUMBER: ";
    cin >> number1;

    cout << "ENTER SECOND NUMBER: ";
    cin >> number2;

    gcd = calculateGCD(number1, number2);
    lcm = calculateLCM(number1,number2,gcd);
    cout <<"GREATEST COMMON DIVISIOR OF "<<number1<<" & "<<number2<<" IS " <<gcd<<endl;
    cout <<"LEAST COMMON MULTIPLE OF "<<number1<<" & "<<number2<<" IS " <<lcm;
}

int calculateGCD(int number1, int number2)
{
    int hcf = 1;
    int count = 1;

    for (int count = 1;count<=number1 || count<=number2;count++){
        if( number1 % count ==0 && number2 % count==0){
            hcf = count;
        }
    }
        return hcf;
}

int calculateLCM(int number1, int number2, int gcd)
{
   int lcm= ((number1*number2)/gcd);
   return lcm;
}