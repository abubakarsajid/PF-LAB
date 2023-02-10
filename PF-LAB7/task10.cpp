#include<iostream>
using namespace std;
main()
{
  int resistances;
  cout<<"Enter Size of Resistance: ";
  cin>>resistances;
  int arr[resistances];
  
  int add=0;
  for(int i=0; i<resistances; i++ )
  {
    cout<<"Value of resistance: ";
    cin>>arr[i];     
    add=add+arr[i];
  }
  
  cout<<"The sum of resistances is: "<<add;



}

