#include<iostream>
using namespace std;


int main(){
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     
A
BC
CDE
DEFG

     */
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char s=('A'-1)+(i+j)-1;
            cout<<s;
            
            j++;}
        cout<<endl;
        i++;
    }
}

