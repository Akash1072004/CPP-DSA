#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3); // By using STL...
    dq.push_back(4);
    dq.push_back(5);
    for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<" ";
    }
    cout<<endl;
    int k;
    cout<<"enter how many you want to reverse : ";
    cin>>k;
    reverse(dq.begin(),dq.end()-(dq.size()-k));
    for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<" ";
    }
}