#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter any binary number:  ";
    cin >> n;
    int original = n;
    int rev = 0;
    while(n > 0){
        int digit = n % 10;
        if(digit != 0 && digit != 1){
            cout << "Invalid binary number" << endl;
            return 0;
        }
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if(rev == original){
        cout << "The binary number is a palindrome." << endl;
    }
    else{
        cout << "The binary number is not a palindrome." << endl;
    }
}