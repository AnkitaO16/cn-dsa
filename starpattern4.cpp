#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<< j;//
            j++;
        }
        cout<<endl;
        i++;
    }
}/*output 6
6
65
654
6543
65432
654321*/