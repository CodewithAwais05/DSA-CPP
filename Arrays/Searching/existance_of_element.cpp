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
    cout<<"Enter the number to check its existence: ";
    cin>>num;
    int exist = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            exist = 1;
            break;
        }
    }
    if(exist){
        cout<<"The number "<<num<<" exists in the array."<<endl;
    }
    else{
        cout<<"The number "<<num<<" does not exist in the array."<<endl;
    }

    return 0;
}