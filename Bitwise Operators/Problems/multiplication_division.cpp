#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    /* As for multiplication 
        a * 2^k  (where k is a positive integer) can be achieved by left shifting the number a by k positions.
    */
   cout << "The result of multiplying by 2 is: " << (n << 1) << endl;
   cout << "The result of multiplying by 4 is: " << (n << 2) << endl;
   cout << "The result of multiplying by 8 is: " << (n << 3) << endl;
   
   
   /* As for division 
       a / 2^k  (where k is a positive integer) can be achieved by right shifting the number a by k positions.
   */
    cout << "The result of division by 2 is: " << (n >> 1) << endl;
    cout << "The result of division by 4 is: " << (n >> 2) << endl;
    cout << "The result of division by 8 is: " << (n >> 3) << endl;

    return 0;
}