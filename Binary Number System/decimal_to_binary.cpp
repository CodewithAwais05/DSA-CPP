#include<iostream>
using namespace std;
int decimalToBinary(int n){
    int ans = 0, pow = 1;
    while(n > 0){
        int rem = n % 2;
        ans += rem * pow;
        n = n / 2;
        pow = pow * 10;
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter a decimal number:  ";
    cin >> n;
    cout << "Binary equivalent: " << decimalToBinary(n) << endl;

    return 0;
}