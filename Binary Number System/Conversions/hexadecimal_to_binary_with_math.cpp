#include <iostream>
#include <string>
using namespace std;

int hexToDecimal(string hex) {
    int decimal = 0;
    int base = 1;

    for (int i = hex.length() - 1; i >= 0; i--) {
        char ch = toupper(hex[i]);
        int value;
        if (ch >= '0' && ch <= '9'){
            value = ch - '0';
        }
        else{
            value = ch - 'A' + 10;
        }
        decimal += value * base;
        base *= 16;
    }

    return decimal;
}

int decimalToBinary(int n) {
    int ans = 0, base = 1;

    while (n > 0) {
        int rem = n % 2;
        ans += rem * base;
        base *= 10;
        n /= 2;
    }

    return ans;
}

int main() {
    string hex;

    cout << "Enter hexadecimal number: ";
    cin >> hex;

    int decimal = hexToDecimal(hex);
    int binary = decimalToBinary(decimal);

    cout << "Binary equivalent: " << binary << endl;

    return 0;
}