#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
    * Print output as specified in the question.
    */
  int n;
    cin>> n;
    int i=1;
    while(i<=n){
        int spaces=1;
        while(spaces<= n-i){
            cout<<' ';
            spaces++;
        }
        int j=1;
        while(j<= i){
            cout<<i+j-1;
            j=j+1;
        }
        int k=i+j-2;
        while(k>i){ 
           cout<<k-1;
            k--;
        }
        cout<<endl;
        i=i+1;
    }

}
/*
   1
  232
 34543
4567654

*/