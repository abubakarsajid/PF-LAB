#include <iostream>
using namespace std;
void even(int number);
main(){


while(true){
int number;
cout<<"Enter a number: ";
cin>>number;
even(number);


}



}
void even(int number){

if(number%2==0){
cout<<"Its A Even Number."<<endl;

}
if(number%2!=0){
cout<<"It is an odd number."<<endl;


}





}