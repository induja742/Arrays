#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    int index;
    cin>>index;
    int key;
    cin>>key;
    n = sizeof(arr)/sizeof(arr[0]);
    for(int i =n;i>index;i--){
        arr[i] = arr[i-1];
    }
    arr[index] = key;
    for(int i=0;i<=n;i++){
        cout<<arr[i];
    }
    return 0;

}