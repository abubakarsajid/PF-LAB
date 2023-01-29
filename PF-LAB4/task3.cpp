#include<iostream>
#include<cmath>

using namespace std;

bool symmetery(int number);

main(){

  int number;

  cout<<"Enter Number: ";
  cin>>number;

  cout<<symmetery(number);


}

bool symmetery(int number){

   int rem1 = number % 10;
   int quotient1 = number / 10;

   int rem2 = quotient1 % 10;
   int quotient2 = quotient1 / 10;

   int rem3 = quotient2 % 10;
  
  if(rem1==rem3){
          
          return true;     

   }
   if(rem1!=rem3){
          
          return false;     

   }     

   return 0;
} 