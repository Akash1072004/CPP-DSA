#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>m;
    pair<string,int>p1;
    p1.first="Akash";
    p1.second = 21;
    
    pair<string,int>p2;
    p2.first="Aman";
    p2.second = 1;

    pair<string,int>p3;
    p3.first="Prakash";
    p3.second = 2;

    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
    
    // for(pair<string,int> p : m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    //Another way of writing for each loop by using "auto"...
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
}