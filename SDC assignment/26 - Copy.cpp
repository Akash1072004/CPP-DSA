#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int x;
void first(vector<int>&v){
    int idx;
    for(int i=x-1;i>=0;i--){
        if(v[i-1]<v[i]){
            idx=i-1;
            break;
        }
        else continue;
    }
    // cout<<v[idx]<<endl;
    int h= x-1;
    int i=idx+1;
  while(i<=h){
        if(v[i]>v[h]){
            int temp = v[i];
            v[i]=v[h];
            v[h]=temp;
            h--;
            i++;
        }
        else i++;
   } 
//    for(int i=0;i<x;i++){
//     cout<<v[i]<<" ";
//    }
//    cout<<endl;
   int b;
   for(int i=idx+1;i<x;i++){
        if(v[idx]<v[i]){
            b=i;
            break;
        }
   } 
//    cout<<b<<endl;
   int temp = v[idx];
   v[idx]=v[b];
   v[b]= temp;
   for(int i=0;i<x;i++){
    cout<<v[i]<<" ";
   }
}
int main(){
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    first(v);
}