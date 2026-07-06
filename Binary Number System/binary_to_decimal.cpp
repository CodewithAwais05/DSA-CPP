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
int main(){
    int n;
    cout << "Enter a binary number:  ";
    cin >> n;
    cout << "Decimal equivalent: " << binaryToDecimal(n) << endl;

    return 0;
}