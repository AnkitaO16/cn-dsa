#include <iostream>
using namespace std;/*#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n - i + 1) {
            cout << '*';
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

*/

int main(){
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
            cout<<'*';
            j=j+1;
        }
        j=i-1;
        while(j>=1){
            cout<<'*';
            j=j-1;
        }
        cout<<endl;
        i=i+1;
    }
}/*
   *
  ***
 *****
*******
*/