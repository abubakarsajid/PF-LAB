#include<iostream>

using namespace std;

int multiplyby5 (int number);

main(){

  int number;
  int result;
  cout<<"Enter Number: ";
  cin>>number;

 result = multiplyby5(number);

  cout<<"RESULT: "<<result;

}


int multiplyby5 (int number)
{  

  int no = number * 5;

  return no;

} 
