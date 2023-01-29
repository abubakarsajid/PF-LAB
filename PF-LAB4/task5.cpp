#include<iostream>
#include<windows.h>
using namespace std;

int calculateTime(int hours, int minutes);
 
main(){

  int hours , minutes;

  cout<< "Enter Hours: ";
  cin>>hours;

  cout<< "Enter Minutes : ";
  cin>>minutes;
 
  int time = calculateTime(hours , minutes);

  cout<<time;
  
}

int calculateTime(int hours, int minutes){

    
   minutes = minutes + 15;

  if(minutes > 59){

     hours= hours + 1;
     minutes = minutes - 60;
}

  if(hours > 23){

       hours = hours-24;
}

   cout << "The time after 15 minutes will be " << hours << ":" << minutes << endl;
   return 0;
} 