#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
    * Print output as specified in the question.
    */
  int n;
    cin>>n;
    int i=1;
    char A;
    while(i<=n){
        int j=1;
        //int p=j;
        char s= 'A'+i-1;
        while(j<=n){
           // int p=i+j;
            //p++;
            
            char ch=s+j-1;
            cout<< ch;
            j++;
            
        }
        cout<<endl;
        i++;
        
    }
}


/*ABCD
BCDE
CDEF
DEFG*/