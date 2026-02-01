#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int x = s.size();
    int a = 0,b=0,m=INT_MAX;
    vector<int>v(x,0); // leetcode 2483...
    int idx=0;
    for(int i=0;i<x;i++){ // find total number of Y and N...
        if(s[i]=='y')a++;
        else b++;
    }
    v[0]=a;
    if(v[0]<m){
        idx=0;
        m=v[0];
    }
    for(int i=1;i<x;i++){ //
        if(s[i-1]=='y')a--;
        else a++;
        v[i]=a;
        if(v[i]<m){
            idx=i;
            m=v[i];
        }
    }
    if(b<m){
            idx=x;
            m=b;
        }
    for(int i=0;i<x;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<idx<<" "<<m;    
}