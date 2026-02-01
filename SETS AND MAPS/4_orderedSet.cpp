#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s; // This is ordered set , it take the ele in ascending order...
    s.insert(5);
    s.insert(3);
    s.insert(7);
    for(int ele : s){
        cout<<ele<<" ";
    }
}