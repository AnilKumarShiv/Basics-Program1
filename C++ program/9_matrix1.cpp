/*  ******************   Matrix  ************ */
 
 // ******************* value enter in matrix **************** //

#include<iostream>
using namespace std;

int main()
{
    int i,j,arr[3][3]={
        {1,2,3},{4,5,6},{7,8,9}
        };
    
    cout<<"the matrix is :\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
           
        } cout<<endl;
    }
    cout<<endl;
    return 0;
 }
    

