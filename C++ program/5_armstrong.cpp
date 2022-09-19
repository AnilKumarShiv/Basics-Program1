/* **************** Armstrong Number **************** */

  // ---------------- simple Logic ------------------//

#include<iostream>
using namespace std;

int main(){
    
        int sum=0,r,n,temp;
        cout<<"enter a number :";
        cin>>n;
        temp=n;

        while(n>0){
            r=n%10;
            sum=sum + (r*r*r);
            n=n/10;
        }
       if(temp==sum){
        cout<<"Armstrong Number.";
       }
       else{
        cout<<"Not Armstrong Number.";
       }
       return 0;
}