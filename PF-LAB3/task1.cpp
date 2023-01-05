#include <iostream>
using namespace std;

void sum(int number1, int number2);
void multiplication(int number1, int number2);
void subtraction(int number1, int number2);


main()
{
 
int number1;
int number2;
char operation;
cout<<"First number is :";
cin>>number1;
cout<<"Second number is :";
cin>>number2;
cout<<"Enter the operation(+,-,*): ";
cin>> operation;



if(operation =='+'){
sum(number1,number2);
}


if(operation =='-'){
subtraction(number1,number2);
}
if(operation =='*'){
multiplication(number1, number2);
}
}


void subtraction(int number1, int number2){

int subtraction;
subtraction=number1-number2;
cout<<"Subtraction is: "<<subtraction<<endl;
}


void sum(int number1, int number2){

int sum;
sum=number1+number2;
cout<<"The sum is: "<<sum<<endl;
}
void multiplication(int number1, int number2)
{
int multiplication;
multiplication=number1*number2;
cout<<"Multiplication: "<<multiplication<<endl;
}
