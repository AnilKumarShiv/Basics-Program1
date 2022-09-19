//*  ******************   Matrix  ************ */
 
 // ******************* print matrix **************** //

#include<iostream>
using namespace std;

int main()
{
    int r,c,n,m,i,j,arr[10][10];

cout<<"Enter no. of row matrix :";
cin>>r;
cout<<"Enter no. of column matrix :";
cin>>c;

cout<<"Enter Element of first matrix :\n";

  
   for(i=0;i<r;i++)
        for(j=0;j<c;j++)
           cin>>arr[i][j];
           

    
    cout<<"The firstmatrix is :\n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
           
        } cout<<endl;
    }
    cout<<endl;


    cout<<"Enter Element of second matrix :";

  
   for(i=0;i<r;i++)
        for(j=0;j<c;j++)
           cin>>arr[i][j];
           

    
    cout<<"The second matrix is :\n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
           
        } cout<<endl;
    }
    cout<<endl;
              return 0;
}