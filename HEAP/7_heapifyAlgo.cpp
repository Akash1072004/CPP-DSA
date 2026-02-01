#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void heapify(int i,int arr[],int n){ // Heapify Algorithm...
    int left = 2*i;
    int right = (2*i)+1;
    while(left<n){
        if(arr[i]>min(arr[left],arr[right])){
            if(arr[left]<arr[right]){
                swap(arr[i],arr[left]);
                i=left;
            }
            else {
                swap(arr[i],arr[right]);
                i=right;
            }
        }
        else break;
        left=2*i;
        right = left+1;
    }
}
int main(){
    int arr[]={-1,10,2,14,11,1,4};
    int n = sizeof(arr)/4;
    print(arr,n);
    for(int i=n/2;i>=1;i--){
        heapify(i,arr,n);
    }
    print(arr,n);
}