/*  ****************** Number Trigle   ************ */

  //  ------------ 1. Tringle --------------// 

  /*     1   
        121  
       12321 
      1234321
     123454321     */

// #include<iostream>
// using namespace std;


// int main(){

//       int n,i,j,k,l;
//      cout<<"Enter the renge:";
//      cin>>n;

//      for(i=1;i<=n;i++)
//      {
     
//       for(j=1;j<=n-i;j++)
//        {
//          cout<<" ";
//        }

//        for(k=1;k<=i;k++)
//        {
//         cout<<k;
//        }

//        for(l=i-1;l>=1;l--)
//         {
//            cout<<l;
//        }

//         cout<<"\n";
//      }

//     return 0;
// }


//  ------------ 2. Tringle --------------// 

                /*     1
                       12
                       123
                       1234
                       12345      */


// #include<iostream>
// using namespace std;

// int main(){

//       int n,i,j,k,l;
//      cout<<"Enter the renge:";
//      cin>>n;

//      for(i=1;i<=n;i++)
//      {
     
//       for(j=1;j<=n-i;j++)
//        {
//          cout<<" ";
//        }

//        for(k=1;k<=i;k++)
//        {
//         cout<<k;
//        }
//         cout<<"\n";
//      }

//     return 0;
//  }

//  ------------ 3. Tringle --------------// 

/*   */
         
 #include<iostream>
using namespace std;


int main(){

      int n,i,j,k,l;
     cout<<"Enter the renge:";
     cin>>n;

     for(i=1;i<=n;i++)
     {
     
      for(j=1;j<=n-i;j++)
       {
         cout<<" ";
       }

       for(k=1;k>=i;k--)
       {
        cout<<k;
       }
        cout<<"\n";
     }

    return 0;
}
