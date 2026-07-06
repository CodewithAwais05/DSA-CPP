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
int Octal(int n){
    int decimal = binaryToDecimal(n);
    int ans = 0, pow = 1;
    while(decimal > 0){
        int rem = decimal % 8;
        ans += rem * pow;
        decimal = decimal / 8;
        pow = pow * 10;
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter a binary number:  ";
    cin >> n;
    cout << "Octal equivalent: " << Octal(n) << endl;

    return 0;
}