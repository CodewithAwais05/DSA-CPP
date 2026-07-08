#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, -4, -3, 2, 6, -8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int copy_arr[size];
    for(int i = 0; i < size; i++){
        copy_arr[i] = arr[i];
    }
    cout << "Copied array: ";
    for(int i = 0; i < size; i++){
        cout << copy_arr[i] << " ";
    }
    cout << endl;

    return 0;
}