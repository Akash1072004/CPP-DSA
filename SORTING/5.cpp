#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout<<"enter no. of children : ";
     cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){ // assign cookies... not better method...
        cin>>v[i];
    }
    int y;
    cout<<"enter no. of cookies : ";
    cin>>y;
    vector<int>v1(y);
    for(int i=0;i<y;i++){
        cin>>v1[i];
    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    int count = 0;
    int a = 0;
    if(v[0]>v1[y-1])count=0;
    else {
        for(int i=0;i<x;i++){
        for(int j=a;j<y;j++){
            if(v1[j]>=v[i]){
                count++;
                a=j+1;
                break;
            }
        }
    }
}
cout<<"number of children is "<<count;
}