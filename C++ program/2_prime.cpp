/* **************** Prime Number **************** */

#include<iostream>
using namespace std;

int main(){
    int i,num,count=0;
    char yes,no;

//    cout<<"Do you want check number Prime? [Y/N] :";
//    cin>>yes;
//    if(yes=='y' || yes=='Y'){

    cout<<"Enter a number:";
    cin>>num;
  for(i=2;i<=num;i++){
    if(num%i==0)
    {
        count =count +1;
    }
  }
   cout<<"number is not Prime.";

    if(count==1){
        cout<<"Number is prime.";
    }
   return 0;
   }
//    else{
//     cout<<"****** thanks for visit..*******";
//    }

