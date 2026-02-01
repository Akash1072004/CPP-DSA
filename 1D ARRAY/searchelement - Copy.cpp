#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x;
    int a[x];
    for(int i=0;i<=x-1;i++){
        cin>>a[i];
    }
    cout<<"enter the element yiu want tp find ";
    cin>>y;
    bool check = 0;
    for(int i=0;i<=x-1;i++){
        if(a[i]==y)check = 1;
    }
if(check == 1)cout<<"present";
else cout<<"not present";

    
}