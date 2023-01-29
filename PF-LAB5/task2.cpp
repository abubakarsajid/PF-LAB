#include <iostream>

using namespace std;

float discount(float amount, string day, string month);

main()
{

    float amount;
    string day;
    string month;

    cout<<"ENTER THE AMOUNT: ";
    cin>>amount;
    cout<<"ENTER THE DAY: ";
    cin>>day;
    cout<<"ENTER THE MONTH: ";
    cin>>month;

    cout<<"TOTAL PURCHASE AMOUNT: "<<discount(amount,day,month);

    return 0;
}



float discount(float amount, string day, string month){

      float discountIt = amount;  

      if(day=="Sunday"&&(month=="October" || month=="March" || month=="August")){
           discountIt = (amount-((amount * 10)/100));
        
        }

     if(day=="Monday"&&(month=="November" || month=="December")){
           discountIt = (amount-((amount * 5)/100));
        
        }

        

       return discountIt;

}