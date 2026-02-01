#include <iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>v(3,1);
    vector<vector<int>>v(3,vector<int>(3,4));
    cout<<v[0][0]<<endl;
    cout<<v[1][2]<<endl;
    cout<<v[0][1]<<endl;
    cout<<v.size()<<endl;
    cout<<v[0].size()<<endl;
}