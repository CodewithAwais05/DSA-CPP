#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int sum = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    
    float avg = (float)sum / size;
    cout << "Average of elements in the array: " << avg << endl;

    return 0;
}