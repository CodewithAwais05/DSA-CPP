#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of elements:  ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    /* this XOR concept is used to find the unique number in an array where every other number appears twice. The idea is that when you XOR two identical numbers, the result is 0, and when you XOR a number with 0, the result is the number itself. Therefore, by XORing all the numbers in the array, the duplicates will cancel each other out, leaving only the unique number. */
    /*Using XOR formula for uniqueness:
            a ^ a = 0
            a ^ 0 = a
            a ^ b ^ a = b
    */

    int unique = 0;
    for(int i = 0; i < n; i++){
        unique = unique ^ arr[i];
    }
    cout << "The unique number is: " << unique;

    return 0;
}