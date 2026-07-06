#include<iostream>
using namespace std;
int binaryToDecimal(int n){
    int ans = 0, pow = 1;
    while(n > 0){
        int rem = n % 10;
        ans += rem * pow;
        n = n / 10;
        pow = pow * 2;
    }
    return ans;
}
string Hexadecimal(int n){
    int decimal = binaryToDecimal(n);
    string hex = "";
    while(decimal > 0){
        int rem = decimal % 16;
        if(rem < 10){
            hex = char(rem + '0') + hex;
        }
        else{
            hex = char(rem - 10 + 'A') + hex;
        }
        decimal = decimal / 16;
    }
    return hex;
}
int main(){
    int n;
    cout << "Enter a binary number:  ";
    cin >> n;
    cout << "Hexadecimal equivalent: " << Hexadecimal(n) << endl;

    return 0;
}