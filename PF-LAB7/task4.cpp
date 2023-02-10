#include<iostream>

using namespace std;

main(){

    int arraySize=0;
    int number;

    cout<<"ENTER SIZE OF ANY ARRAY: ";
    cin>>arraySize;

    int smallest=1000;

    int element;
    int arr[arraySize];
    int product=1;
    for (int i=0 ; i<arraySize; i++){

        cout<<"ENTER ELEMENT: ";
        cin>>arr[i];

    }


    for(int j=0 ; j<arraySize;j++){
        if(arr[j]<smallest){
            smallest=arr[j];
        }
    }

    cout<<smallest;
}