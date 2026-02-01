#include<iostream>
using namespace std;
int x;

void d(int s[]){//we can use int* a....at place of int s[];
    for(int i =0;i<x;i++){
        cout<<i[s]<<" ";//we can print the array by writing i[s] in place of s[i];
    }
}
void s(int g[]){
    g[3]=56;
    cout<<endl;
}
int main(){
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    d(arr);//this will only send the address of array
    //here adress of array and adress of a[0] is same.....
    s(arr);
    d(arr);
}