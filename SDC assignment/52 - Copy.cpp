#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<=x;i++){
        cin>>v[i];
    }
    int a=0;
    for(int i=0;i<=x;i++){
        if(v[i]!=i){
            cout<<"missing number is "<<i;
            a=1;
            break;
        }
    }
    if(a==0)cout<<"there is not any missing number";
}