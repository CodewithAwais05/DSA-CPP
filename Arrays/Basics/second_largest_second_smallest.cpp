#include<iostream>
using namespace std;
int main()
{
    int arr[] = {7, 5, 3, 8, 3, 87, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    int max = arr[0];   
    int sec_min, sec_max;
    sec_min = sec_max = 0;
    for(int i = 1; i < size; i++){
        if(arr[i] < min){
            sec_min = min;
            min = arr[i];
        }
        else if(arr[i] < sec_min && arr[i] != min){
            sec_min = arr[i];
        }
        if(arr[i] > max){
            sec_max = max;
            max = arr[i];
        }
        else if(arr[i] > sec_max && arr[i] != max){
            sec_max = arr[i];
        }
    }
    cout << "Minimum element in the array: " << min << endl;
    cout << "Maximum element in the array: " << max << endl;
    cout << "Second minimum element in the array: " << sec_min << endl;
    cout << "Second maximum element in the array: " << sec_max << endl;
    return 0;
}