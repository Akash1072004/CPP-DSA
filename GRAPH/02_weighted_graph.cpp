#include<bits/stdc++.h>
using namespace std;
vector<list<pair<int,int>>> graph;
int v; // no. of vertices ...
void add_edge(int src, int dest, int weight, bool bi_dir){
    graph[src].push_back({dest,weight});
    if(bi_dir){
        graph[dest].push_back({src,weight});
    }
}
void display(){
    for(int i = 0; i < graph.size(); i++){
        cout << i << " -> ";
        for(auto ele : graph[i]){
            cout << "(" << ele.first << ", " << ele.second << ")" << " , ";
        }
        cout <<  endl;
    }
}
int main(){
    cin >> v;
    graph.resize(v, list<pair<int,int>> ());
    int edge;
    cin >> edge;
    while(edge--){
        int src, dest, weight;
        cin >> src >> dest >> weight;
        add_edge(src, dest, weight, true);
    }
    display();
}