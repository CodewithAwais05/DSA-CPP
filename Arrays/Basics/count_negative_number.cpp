#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, -4, -3, 2, 6, -8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int negative_count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] < 0){
            negative_count++;
        }
    }
    cout << "Count of negative numbers in the array: " << negative_count << endl;

    return 0;
}