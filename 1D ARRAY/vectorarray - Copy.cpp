#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;//vector used as replacement of array;
    v.push_back(6);
     cout<<v[0]<<" ";
    cout<<v.capacity()<<endl;//cpacity used for numvber of index whihc become double with time
        v.push_back(2);
     cout<<v[1]<<" ";
     cout<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v[2]<<" ";
     cout<<v.capacity()<<endl;     
}