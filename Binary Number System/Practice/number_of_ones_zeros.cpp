#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter any binary number:  ";
    cin >> n;
    int count1 = 0, count0 = 0;
    while(n > 0){
        int digit = n % 10;
        if(digit == 1){
            count1++;
        }
        else if(digit == 0){
            count0++;
        }
        else{
            cout << "Invalid binary number" << endl;
            return 0;
        }
        n = n / 10;
    }
    cout << "Number of 1's: " << count1 << endl;
    cout << "Number of 0's: " << count0 << endl;
}