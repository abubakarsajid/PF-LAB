#include<iostream>
#include<windows.h>
using namespace std;
int stateOfPool(int volume , int p1 , int p2 , float h);
 
int main(){

   int volume , p1 , p2;
   float h;

   cout<<"Enter Volume Of Pool In Liters [1...10000]: ";
   cin>>volume;

   cout<<"Enter Flow Rate Of First Pipe Per Hour [1...5000]: ";
   cin>>p1;

   cout<<"Enter Flow Rate Of Second Pipe Per Hour [1...5000]: ";
   cin>>p2;

   cout<<"Enter Hours The Worker Is Absent [1.0...24.00]: ";
   cin>>h;


    h=stateOfPool(volume , p1 , p2 , h);
return 0;
cout<<h;
  
}


int stateOfPool(int volume , int p1 , int p2 , float h){
   
    int currentVolume = h * (p1 + p2);
    int newVolume = currentVolume - volume;
    int nVolume = ((currentVolume * 100) / volume);
    int nP1 = ((p1 * 100) / (p1 + p2));
    int nP2 = 100 - nP1 ;

    if(volume <= p1){
  
    		cout<<"For "<<h<<" hours the pool overflows with "<<newVolume <<" liters" ;
                return 0;
	}


    if(volume <= p2){
  
    		cout<<"For "<<h<<" hours the pool overflows with "<<newVolume <<" liters" ;
                return 0;
	}


    if(volume > p1){

    		cout<<"The Pool IS: "<<nVolume<<"% Full. Pipe 1: "<<nP1<<"% Pipe 2: "<<nP2 <<"%";
                return 0;
	}

    if(volume > p2){

    		cout<<"The Pool IS: "<<nVolume<<"% Full. Pipe 1: "<<nP1<<"% Pipe 2: "<<nP2 <<"%";
                return 0;
	}

}