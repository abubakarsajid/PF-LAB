#include<iostream>
using namespace std;
main()
{
  string word;
  cout<<"Enter the word: ";
  getline(cin, word);
  int idx = 0;
  while(word[idx] !='\0' )
{
    cout<<"At index: "<<idx<<" ""The word is:" << word[idx]<<endl;
    idx++;

}
for(int a= idx; a!='\0'; a--)
{


    cout<<word[a-1];
}


    }




