#include<bits/stdc++.h>
using namespace  std;
void display(queue<int>&q){
    int size = q.size();
    while(size>0){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
        size--;
    }
    cout<<endl;
}
vector<int> r(vector<int>& a, int x) {
    
}

vector<int> deckRevealedIncreasing(vector<int>& v) {
       
    }
int main(){
    vector<int>v={17,13,11,2,3,5,7};
    
    vector<int>b=deckRevealedIncreasing(v);
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
}