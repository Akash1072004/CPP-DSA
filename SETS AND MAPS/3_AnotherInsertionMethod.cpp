#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>m;
    m["Harsh"] = 1;
    m["Raghav"] = 2;
    m["Sanket"] = 3;
    
    cout<<m["Harsh"]<<endl;
    // for(auto p : m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    // cout<<endl;
    // cout<<m.size()<<endl;
    // m.erase("Harsh");
    // for(auto p : m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    // cout<<endl; 
    // cout<<m.size()<<endl;
}