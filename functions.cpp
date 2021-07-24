#include<iostream>
using namespace std;
int get(int arr[],int index,int len){
    if(index>=0 && index<len){
        return arr[index];
    }
    return -1;

}
int set(int arr[],int index,int len,int x){
    if(index>=0 && index<len){
        arr[index] = x;
    }
    return 0;

}
int maximum(int arr[],int max,int len){
    
    for(int i = 0;i<len;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        
    }
    return max;
}
int sum(int arr[],int len){
    int total = 0;
    for(int i = 0;i<len;i++){
        total += arr[i];
    }
    return total;
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
    int max = arr[0];
    int index;
    cin>>index;
    int x;
    cin>>x;
    cout<<get(arr,index,len);
   cout<<set(arr,index,len,x);
   for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<maximum(arr,max,len);
    cout<<sum(arr,len);
    return 0;


    }