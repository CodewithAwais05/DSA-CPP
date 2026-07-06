#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter any binary number:  ";
    cin >> n;
    int length = 0;
    while(n > 0){
        int digit = n % 10;
        if(digit != 0 && digit != 1){
            cout << "Invalid binary number" << endl;
            return 0;
        }
        n = n / 10;
        length++;
    }
    cout << "Length of binary number: " << length << endl;
}