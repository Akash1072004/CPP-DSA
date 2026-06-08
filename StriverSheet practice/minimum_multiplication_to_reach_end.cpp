#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int minSteps(vector<int>& arr, int start, int end) {
        // code here
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;
        
        pq.push({0, start});
        
        vector<int> dist(1000, 1e9);
        
        dist[start] = 0;
        
        while(!pq.empty()) {
            int node = pq.top().second;
            int steps = pq.top().first;
            pq.pop();
            
            for(int i = 0; i < arr.size(); i++) {
                int number = (node* arr[i]) % 1000;
                if(dist[number] > steps+1) {
                    dist[number] = steps+1;
                    pq.push({dist[number], number});
                }
            }
        }
        
        if(dist[end] == 1e9) return -1;
        else return dist[end];
        
       
        
    }
};
int main() {

}