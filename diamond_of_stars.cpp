 #include<iostream>
using namespace std;


int main() {
    int N;
    cin >> N;
    int i=1;
    
    while(i<=(N/2)+1){
        int spaces=1;
        while(spaces<=(N/2)+1-i){
        cout<< " ";
        spaces++;
       
        } 
        int j=1;
        while(j<=(2*i)-1){
            cout << "*";
            j++;
        }
        
       cout << endl;
    i++;  
        
    }
    
    i=1;
    while(i<=N/2){
       int spaces2=1;
        while(spaces2<=i){
            cout << ' ';
            spaces2++;
        }
       int j= 2*((N/2)-i+1)-1;
        while(j>=1){
            cout << '*';
            j--;
        }
        cout << endl;
        i++;
    }
    
    
}
/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/