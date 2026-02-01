#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){ // put 0 1 2.. in the sorting form...
        cin>>v[i];
    }
   vector<int>v1(x);
   for(int i=0;i<x;i++){
    v1[i]=v[i];
   }
   sort(v1.begin(),v1.end());
   int a = 0;
   for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
        if(v[j]==v1[i]){
            v[j]=a;
            a--;
            break;
        }
    }
   }
   for(int i=0;i<x;i++){
     v[i]= -1*v[i];
   }
   for(int i=0;i<x;i++){
     cout<<v[i]<<" ";
   }
}