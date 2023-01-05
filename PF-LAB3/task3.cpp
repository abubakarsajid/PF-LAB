#include <iostream>
using namespace std;
void ifpass(int marks);
main(){
int marks;
while(true){

cout<<"Enter your quiz marks: ";
cin>> marks;
ifpass(marks);
}
}


void ifpass(int marks){

if( marks>50){

cout<<"You have passed your first quiz."<<endl;

}
if(marks==50){

cout<<" Your Marks are fifty."<<endl;

}
if(marks<50){

cout<<"You are are fail."<<endl;


}
}
