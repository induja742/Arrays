#include<iostream>
using namespace std;
int linearSearch(int arr[],int len,int key){
    for(int i = 0;i<len;i++){
        if(key == arr[i]){
            return i;
        }
    }  
    return -1;
}
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
    int len = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    cout<<linearSearch(arr,n,key);
    return 0;
}