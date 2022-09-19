/* **************** Palindrome Number **************** */

  // ---------------- simple Logic ------------------//

#include<iostream>
using namespace std;

// int main(){
//   int fact=1,num,i;

//       cout<<"Enter a number :";
//       cin>>num;
//     for(i=1;i<=num;i++){
//       fact=fact*i;
//     }
//     cout<<"The Factorial is :"<<fact;
// }

 // --------------  using recuirsion -----------------//


   int  main(){
        
         int factorial(int);
         int num;
         cout<<"Enter a number :";
         cin>>num;
         int factnum = factorial(num);   
         cout<<"The factorial is number is :"<<factnum;
         return 0; 
   }
    
    int factorial(int n){
        if(n<0){
            return (-1);
        }
        if(n==0){
            return (1);
        }
        else{
        return (n*factorial(n-1));
        }
    }