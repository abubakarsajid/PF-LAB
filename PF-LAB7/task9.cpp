#include<iostream>


using namespace std;

main(){

    string name;
    cout<<"ENTER NAME: ";
    getline(cin,name);


   int count=0;

   while(name[count]!='\0'){
    count++;
   }

   char letter;

   cout<<"ENTER LETTER: ";
   cin>>letter;

   if(name[count-1]==letter){
    cout<<"LAST CHARACTER IS SAME AS LETTER "<<letter;
   }
   else{
    cout<<"LAST CHARACTER IS NOT SAME AS LETTER "<<letter;

   }
}