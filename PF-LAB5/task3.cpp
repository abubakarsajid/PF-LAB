#include<iostream>

using namespace std;

string checkTitle(char gender, int age);

main(){

    char gender ;
    int age;

    cout<<"ENTER YOUR GENDER ('M OR F'): ";
    cin>>gender;
    cout<<"ENTER YOUR AGE: ";
    cin>>age;

    cout<<checkTitle(gender,age);

    return 0; 

}

string checkTitle(char gender, int age){

    string returnIt;  
    
     if(gender=='M' && age >= 16){
        returnIt="Mr.";
     }
     else if(gender=='M' && age < 16){
        returnIt="MASTER";
     }
     else if(gender=='F' && age >= 16){
        returnIt="Mis.";
     }
     else if(gender=='F' && age < 16){
        returnIt="Miss";
     }

     else{
        returnIt="INVALID INPUT";
     }

    return returnIt;

}
