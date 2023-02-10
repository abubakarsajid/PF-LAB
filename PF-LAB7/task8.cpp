#include<iostream>
using namespace std;
main()
{
  string name;
  cout<<"Enter your name: ";
  getline(cin, name );
  int count=0;
  int vowel=0;

  while(name[count] !='\0' )
{   if(name[count]=='a' || name[count]=='e'|| name[count]=='i'|| name[count]=='o'|| name[count]=='u')
   { 
    vowel++;
    count++;
             } 
else{

count++;

}   
}

    cout<<"No of vowels are: "<<vowel<<endl;
}

