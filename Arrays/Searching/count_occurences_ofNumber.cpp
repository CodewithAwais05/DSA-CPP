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
    cout<<"Enter the number to count its occurrences: ";
    cin>>num;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            count++;
        }
    }
    cout<<"The number "<<num<<" occurs "<<count<<" times in the array."<<endl;

    return 0;
}