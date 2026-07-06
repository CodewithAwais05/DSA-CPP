#include<iostream>
using namespace std;
int main(){
    int a=10;
    cout << "a >> 1 = " << (a >> 1) << endl;

    /*10 >> 1 means:
    Shift the bits of 10 to the right by 1 position
    Process:
    10 in binary is 1010
    Shifting right by 1 position gives 0101
    0101 in decimal is 5*/

    /*its shortcut answer formula is:
    a >> b = a / 2^b       */

    return 0;
}