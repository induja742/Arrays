#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }
    int index;
    cin>>index;
    n = sizeof(arr)/sizeof(arr[0]);
    for(int i = index;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    for(int i = 0;i<n-1;i++){
        cout<<arr[i];
    }
}