#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int>m; // This is ordered map , it take the key in ascending order...
    m[3]=20;
    m[1]=30;
    m[2]=10;
    for(auto x : m){
        cout<<x.second<<" "; // it only arrange the key in ascending order...
    }
}