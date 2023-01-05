#include<iostream>
using namespace std;
main()
{

float mbs;
float conversion;
float bits;
float a;
float b; 
float c;

cout<<"Enter the value in megabytes:";
cin>>a;

conversion= a*1024;
cout<<"The value in kbs is:"<<conversion<<endl;

b=conversion*1024;
cout<<"The value in bytes is:"<<b<<endl;

c=b*8;
cout<<"The value in bits is:"<<c<<endl;

 

}

