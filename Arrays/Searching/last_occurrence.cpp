#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cout<<"Enter the number to count its last occurrence: ";
    cin>>num;
    int lastIndex = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            lastIndex = i;
        }
    }
    if(lastIndex != -1){
        cout<<"The number "<<num<<" occurs at index "<<lastIndex<<" in the array."<<endl;
    }
    else{
        cout<<"The number "<<num<<" is not found in the array."<<endl;
    }

    return 0;
}