#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter any number:  ";
    cin >> n;
    if(n & 1){
        cout << n << " is an odd number.";
    }
    else{
        cout << n << " is an even number.";
    }

    return 0;
}