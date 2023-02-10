#include<iostream>
using namespace std;
main()
{
  bool flag=false;
  int size;
  cout<<"Enter size of array :";
  cin>>size;
  int arr[size];

  for(int ab=0; ab<size ; ab++)
  {

    cout<<"Enter the element: ";
    cin>>arr[ab];

  }
int number;

  cout<<"Enter a  number to find in array: ";
  cin>>number;
for(int ab=0; ab<size ; ab++){
    if(arr[ab]==number)
    {
     flag=true;
    }
}
if(flag=true)
{

    cout<<"Number Found ";
}    
else
{
    cout<<"Number not found ";
}
 







    }




