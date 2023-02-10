#include<iostream>


using namespace std;

main(){

    string name;
    cout<<"ENTER NAME: ";
    getline(cin,name);


    for (int i=0 ; name[i]!='\0'; i++){

        cout<<"CHARACTER AT INDEX "<<i<<" IS "<<name[i]<<endl;

    }

}