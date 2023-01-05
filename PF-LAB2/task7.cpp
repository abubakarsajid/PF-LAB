#include<iostream>
using namespace std;
main()
{

string name;
float MatricMarks;
float IntermediateMarks;
float EcatMarks;
float Aggregate;
float ecatpercentage;
float matricpercentage;
float interprecentage;

cout<<"Enter your name:";
cin>> name;
cout<<endl;

cout<<"Enter your Matric Marks Out of 1100:";
cin>> MatricMarks;
cout<<endl;

cout<<"Enter your inter marks out of 550:";
cin>> IntermediateMarks;
cout<<endl;

cout<<"Enter your ecat marks out of 400:";
cin>> EcatMarks;
cout<<endl;

ecatpercentage=EcatMarks/400*50;
interprecentage=IntermediateMarks/550*40;
matricpercentage=MatricMarks/1100*10;

Aggregate= ecatpercentage+interprecentage+matricpercentage;

cout<<"Your aggregate is:"<<Aggregate<<endl;











}
