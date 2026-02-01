#include<iostream>
#include<vector>
using namespace std;
 int x;
void change(vector<int>y){// learn the syntax; if we take here &y then it copy the address And the change in main function is Done by changing in void function
   y[0]=434;
    for(int i=0;i<x;i++){
        cout<<y.at(i)<<" ";
    }
    cout<<endl;

}
int main(){
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    cout<<endl;
    for(int i=0;i<x;i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<x;i++){
        cout<<v.at(i)<<" ";
    }
}