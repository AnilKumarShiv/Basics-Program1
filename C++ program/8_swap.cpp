/*  ******************   Swap Number  ************ */
 
 // ******************* value swap without using third varible **************** //

#include<iostream>
using namespace std;


// int main(){
//      int a,b,fnum,snum;
//       cout<<"Enter first number  :";
//       cin>>a;
//       cout<<"Enter second number :";
//       cin>>b;

//       cout<<"Before swapping number :"<<a<<" "<<b<<endl;
       
//        a=a+b;
//        b=a-b;
//        a=a-b;

//        cout<<"After swapping number :"<<a<<" "<<b;

// }

// ****************** value swap using third varible *********************//

int main(){
     int a,b,temp;
      cout<<"Enter first number  :";
      cin>>a;
      cout<<"Enter second number :";
      cin>>b;

      cout<<"Before swapping number :"<<a<<" "<<b<<endl;
       
       temp=a;
       a=b;
       b=temp;

       cout<<"After swapping number :"<<a<<" "<<b;
}