#include<iostream>

using namespace std;


string checkCase(char alphabet);

main(){

  char alphabet;
  
  cout<<"Enter An Alphabet: ";
  cin>>alphabet;

  checkCase(alphabet);

  cout<<"The Alphabet You Entered Is In "<<checkCase(alphabet);

}


string checkCase(char alphabet){
  if(alphabet >= 'a' ){

    return "lowercase";

}

  else if(alphabet >= 'A' ){

    return "uppercase";

}

 
return "not an alphabet";

}
