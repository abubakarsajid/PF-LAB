#include<iostream>


using namespace std;

main(){

 
    int arr1[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter a number for first array: ";
        cin >> arr1 [i];
    }
    int n;
    cout << "Enter size of second array: ";
    cin >> n;
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a number: ";
        cin >> arr2 [i];
    }
    int arr3 [n+2];
    arr3 [0] = arr1 [0];
    arr3 [n+1] = arr1 [1];
    int j = 0;
    for (int i = 1; i <= n; i++)
    {
        arr3[i] = arr2[j];
        j++;
    }
    for (int i = 0; i <= (n+1); i++)
    {
        cout << arr3[i] << " ";
    }
}
