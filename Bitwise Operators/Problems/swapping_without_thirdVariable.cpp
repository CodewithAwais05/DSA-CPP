#include<iostream>
using namespace std;
int main(){
    int a = 10, b = 20;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    
    // Swapping using XOR operator
    
    a = a ^ b; // Step 1: a now becomes 30 (10 XOR 20)
    b = a ^ b; // Step 2: b now becomes 10 (30 XOR 20)
    a = a ^ b; // Step 3: a now becomes 20 (30 XOR 10)
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}