#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter value of N: ";
    cin >> num;
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "The missing numbers from 1 to " << num << " are: ";
    for(int i=1;i<=num;i++){
        bool found = false;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                found = true;
                break;
            }
        }
        if(!found){
            cout << i << " ";
        }
    }

    return 0;
}