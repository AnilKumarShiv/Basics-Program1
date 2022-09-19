//*  ******************   Matrix  ************ */
 
 // ******************* Multiplication of two matrix **************** //

#include<iostream>
using namespace std;

int main()
{
    int r,c,n,m,i,j,k,arr1[10][10],arr2[10][10],arr3[10][10];

cout<<"Enter no. of row matrix :";
cin>>r;
cout<<"Enter no. of column matrix :";
cin>>c;

cout<<"Enter Element of first matrix :\n";

  
   for(i=0;i<r;i++){
    for(j=0;j<c;j++){
           cin>>arr1[i][j];
        }
   }
    
    cout<<"The firstmatrix is :\n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<arr1[i][j]<<" ";
           
        } cout<<endl;
    }
    cout<<endl;


    cout<<"Enter Element of second matrix :\n";

  
   for(i=0;i<r;i++){
        for(j=0;j<c;j++){
           cin>>arr2[i][j];
           }
        }

    
    cout<<"The second matrix is :\n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<arr2[i][j]<<" ";
           
        } cout<<endl;
    }
    cout<<endl;


    cout<<"The Multiplication of two matrix:\n";

  
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            arr3[i][j]=0;
            for(k=0;k<c;k++){
                
              arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        } cout<<endl;
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
      cout<<arr3[i][j]<<" ";
        } cout<<endl;
    }
              return 0;
}