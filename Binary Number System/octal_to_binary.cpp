#include<iostream>
using namespace std;
int octalToDecimal(int n){
    int ans = 0, pow = 1;
    while(n > 0){
        int rem = n % 10;
        ans += rem * pow;
        n = n / 10;
        pow = pow * 8;
    }
    return ans;
}
int Binary(int n){
    int decimal = octalToDecimal(n);
    int ans = 0, pow = 1;
    while(decimal > 0){
        int rem = decimal % 2;
        ans += rem * pow;
        decimal = decimal / 2;
        pow = pow * 10;
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter an octal number:  ";
    cin >> n;
    cout << "Binary equivalent: " << Binary(n) << endl;

    return 0;
}