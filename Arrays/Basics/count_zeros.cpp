#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 0, -3, 0, 6, -8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int zero_count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            zero_count++;
        }
    }
    cout << "Count of zeros in the array: " << zero_count << endl;

    return 0;
}