#include <iostream>
using namespace std;
void greaternumber(int firstnumber, int secondnumber);
main(){

while(true){
int firstnumber;
int secondnumber;
cout<<"Enter first number: ";
cin>>firstnumber;
cout<<"Enter second number: ";
cin>>secondnumber;
greaternumber(firstnumber,secondnumber);
}

}
void greaternumber(int firstnumber, int secondnumber){

if(firstnumber>secondnumber){

cout<<"The greater number is: "<<firstnumber<<endl;

}

if(secondnumber>firstnumber){
cout<<"The greater number is: "<<secondnumber<<endl;

}

}
