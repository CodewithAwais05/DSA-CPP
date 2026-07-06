#include<iostream>
using namespace std;
int main(){
    int a=10;
    cout << "a << 2 = " << (a << 2) << endl;

    /*10 << 2 means:
    Shift the bits of 10 to the left by 2 positions
    Process:
    10 in binary is 1010
    Shifting left by 2 positions gives 101000
    101000 in decimal is 40   */

    /*its shortcut answer formula is:
    a << b = a * 2^b       */

    return 0;
}