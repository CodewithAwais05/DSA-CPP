#include<iostream>
using namespace std;
int reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return 0;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverseArray(arr, n);
    for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }

        // Alternative method to reverse the array
        // for(int i = 0; i < n-1; i++){
        //     int temp = arr[i];
        //     arr[i] = arr[n-i-1];
        //     arr[n-i-1] = temp;
        // }
        // for (int i = 0; i < n; i++) {
        //     cout << arr[i] << " ";
        // }
    return 0;
}