#include<iostream>
using namespace std;


int main(){
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     
E       5
DE      45
CDE     345
BCDE    2345
ABCDE   12345

     */
    int n;
    cin>>n;
    int i=1;
   
    while(i<=n){
        int j=1;
        
       
        while(j<=i){
            char s='E'-i+j;
            cout<<s;
            
            j++;}
        cout<<endl;
        i++;
    }
}

