/*  ******************   1. Decimal to binary   ************ */

#include<iostream>
using namespace std;

int main(){
     
     int i,n,a[100];

     cout<<"Enter a number :";
     cin>>n;

     for(i=0;n>0;i++){
     a[i]=n%2;
     n=n/2;
    }

    cout<<"Binary of given number is :";

  for(i=i-1;i>=0;i--){
    cout<<a[i];
  }
    // return 0;
}