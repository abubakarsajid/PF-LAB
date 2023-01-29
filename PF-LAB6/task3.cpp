#include<iostream>

using namespace std;
void printTable(float number);

main(){
float number;

cout<<"ENTER NUMBER OF WHICH TABLE YOU WANT TO PRINT: ";
cin>>number;

printTable(number);


return 0; 

}

void printTable(float number){
    for (int count = 1 ; count<=10 ; count++){
        cout<<number<<" x "<<count<<" = "<<number*count<<endl;
    }
}