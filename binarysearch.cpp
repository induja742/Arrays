#include<iostream>
using namespace std;
int binarySearch(int arr[],int key,int l,int h){
    while(l<=h){
       int  mid = (l+h)/2;
        if(key == arr[mid]){
            return mid;
        }
        else if(key <arr[mid]){
            h = mid -1;
        }
        else if(key>arr[mid]){
            l = mid +1;
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
    int l,h,mid;
    l = 0;
    h = len-1;
    
    cout<<binarySearch(arr,key,l,h);
    return 0;
}