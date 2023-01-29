#include<iostream>

using namespace std;

float totalIncome(string screen , int rows , int columns );

main(){

      string screen;
      int rows;
      int columns;

     cout<<"ENTER THE SCREEN TYPE: ";
     cin>>screen;
     cout<<"ENTER THE ROWS: ";
     cin>>rows;
     cout<<"ENTER THE COLUMNS: ";
     cin>>columns;

     cout<<"Total Earnings Are "<<totalIncome(screen,rows,columns)<<" Euros ";

    return 0; 

}

float totalIncome(string screen , int rows , int columns ){

    float price;

    if(screen=="Premier"){
        price = (rows * columns*12);
    }
    else if(screen=="Normal"){
        price = (rows * columns*7.5);
    }
    else if(screen=="Premier"){
        price = (rows * columns*5);
    }

    else{
        price = rows * columns;
    }


    return price;
}