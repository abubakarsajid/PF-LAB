#include<iostream>

using namespace std;

int checkNumber(int number);

main(){

   int number;
   
   cout<<"Enter Number: ";
   cin>>number;
  
   int number2 =checkNumber(number); 

   cout<<number2;


}

int checkNumber(int number){


   int rem1 = number % 10;
   int quot1 = number / 10;

   int rem2 = quot1 % 10;
   int quot2 = quot1 / 10;

   int rem3 = quot2 % 10;
   int quot3 = quot2 / 10;

   int rem4 = quot3 % 10;
   int quot4 = quot3 / 10;

   int rem5 = quot4 % 10;

   int sum = rem1 + rem2 + rem3 + rem4 + rem5;

   if(sum % 2 == 0 ){

   cout<<"Number Is Evenish";
  }

   if(sum % 2 != 0 ){

   cout<<"Number Is Oddish";
  }
 
     return 0;
}