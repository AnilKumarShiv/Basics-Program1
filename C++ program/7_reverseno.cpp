/* **************** Reverse Number **************** */

#include<iostream>
using namespace std;

int main(){
    int n,r,rev=0;

    cout<<"Enter a number who want to print reverse :";
    cin>>n;
   while(n>0){
    r=n%10;
    rev=rev*10+r;
    n=n/10;
   }
   cout<<"The reverse number is :"<<rev;
}