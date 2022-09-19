/*  ****************** Alphabet Trigle   ************ */

#include<iostream>
using namespace std;


int main(){

      char ch='A';
      int r,sp,c;
     
      r=1;
      while(r<=5){

          sp=4;
          while(sp>=r)
          {
             cout<<" ";
             sp--;
          }
          c=1;
          while(c<=r){
            cout<<ch;
            ch++;
            c++;
          }
          
          c=c-2;
          while(c>=1){
            cout<<ch;
            ch++;
            c--;
          }
          cout<<"\n";
          r++;
      }
    return 0;
}
