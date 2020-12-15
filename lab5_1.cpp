#include<iostream>
using namespace std;

int main(){
    int x;
    int i = 0, j = 0;
    cout << "Enter an integer: ";
    cin >> x;
    
    if(x != 0){
        while(x != 0){
            if(x%2==0){
                i++;
            }else{
                j++;
            }
            cout << "Enter an integer: ";
            cin >> x;
          }
     }
    cout << "#Even numbers = "<<i << endl;
    cout << "#Odd numbers = "<<j;
    return 0;
}