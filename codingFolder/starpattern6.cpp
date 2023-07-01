#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int s=i;// we do this to make counter and row equal
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<< s<<" ";
            s++;
            j++;
        }
        cout<<endl;
        i++;
    }
}/*output 4
1 
2 3
4 5 6
7 8 9 10*/