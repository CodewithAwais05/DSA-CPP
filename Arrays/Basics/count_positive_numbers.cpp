#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, -4, -3, 2, 6, -8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int positive_count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] > 0){
            positive_count++;
        }
    }
    cout << "Count of positive numbers in the array: " << positive_count << endl;

    return 0;
}