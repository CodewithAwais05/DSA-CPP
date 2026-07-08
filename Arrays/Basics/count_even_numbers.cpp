#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 4, 3, 2, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int even_count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            even_count++;
        }
    }
    cout << "Count of even numbers in the array: " << even_count << endl;

    return 0;
}