/*  ******************   1. FIBONACCI SERIES WITHOUT RECURSION   ************ */

#include<iostream>

using namespace std;
 // start program
int main(){
    int n1=0,n2=1,n3,i,number;
    cout<<"Enter the number of element :";
    cin>>number;
    cout<<n1<<" "<<n2<<" ";  //printing 0 and 1

    for(i=2;i<number;++i){
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
   return 0;
}


/*  ****************** 2. FIBONACCI SERIES WITH RECURSION   ************ */

/*   
#include<iostream>

using namespace std;
void fibonacci(int n){
       static int n1,n2,n3;
       if(n>0){
            n3=n1+n2;
            n1=n2;
            n2=n3;
            cout<<n3<<" ";
            fibonacci(n-1);
       }
       
}
int main(){
        int n;
       
        cout<<"Enter the number of element :";
        cin>>n;
        cout<<"Fibonacci seris: ";
        cout<<"0"<<" "<<"1";
        fibonacci(n-2);
        return 0;

}
*/

