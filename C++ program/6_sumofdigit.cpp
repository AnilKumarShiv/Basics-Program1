/* **************** Armstrong Number **************** */


#include<iostream>
using namespace std;

// ************** sum of digit where you want to print  **************//
// int main(){

//      int num,i,sum=0;
//     cout<<"Enter the number where you print the sum :";
//     cin>>num;

//     for(i=1;i<=num;i++)
//     {
//         sum=sum+i;
//     }
//     cout<<"sum of digit :"<<sum;
//     return 0;
// }


  // ********** sum of, between two number  ************//

int main(){
    int n,m,i,sum=0;
    cout<<"Enter starting number:";
    cin>>n;
    cout<<"Enter ending number:";
    cin>>m;

    for(i=n+1;i<=m-1;i++){
        sum=sum+i;
    }
     cout<<"sum of digit :"<<sum;
     return 0;
}