#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 5, 3, 8, 3, 87, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    int max = arr[0];   
    for(int i = 1; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "Minimum element in the array: " << min << endl;
    cout << "Maximum element in the array: " << max << endl;

    return 0;
}