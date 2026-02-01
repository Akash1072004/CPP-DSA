#include<iostream>
using namespace std;
int main(){
    int x;
    int a[x];
    cin>>x;
    int* ptr=a;
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    for(int j=0;j<x;j++){
        cout<<*ptr<<" ";
        ptr++;
    }
}
//cout<<p<<" ";//Very important concept;****
        // p++;//this is working becouse p store address and adrress of array increase by 4 from starting
          //so p++ means it increase address value by 4
          //after p++ in last if get increase the address by 4 which is not part of arrey 
          //eg p++=p;
          //if we have next code So we can use an area over there otherwise the area will be dismissed due to increasing the value of P