#include<iostream>
using namespace std;
int get(int arr[],int index,int len){
    if(index>=0 && index<len){
        return arr[index];
    }
    return -1;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i= 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int len = sizeof(arr)/sizeof(arr[0]);
    int index;
    cin>>index;
    cout<<get(arr,index,len);

    }