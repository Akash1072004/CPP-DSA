#include <bits/stdc++.h>
using namespace std;
vector<int>st;
void segmentTree(vector<int>&v, int i, int low, int high){
    if(low == high){
        st[i] = v[low];
        return;
    }
    int mid = (low + high) >> 1; // (low + high)/2 ...
    segmentTree(v,(2*i)+1,low,mid); // left subtree
    segmentTree(v,(2*i)+2,mid + 1,high); // right subtree
    st[i] = max(st[(2*i)+1],st[(2*i)+2]);
}
int getMax(int l, int r, int i, int low, int high){ // This is the function of getting max in particular range ...
    if(r < low or l > high)return INT_MIN;
    if(low >= l and high <= r)return st[i];
    int mid = (low + high)>> 1;
    int leftMax = getMax(l,r,2*i + 1,low,mid);
    int rightMax = getMax(l,r,2*i + 2,mid+1,high);
    return max(leftMax, rightMax);
}
int main(){
    vector<int>v = {1,4,2,8,6,4,9,3};
    int n = v.size();
    st.resize(4*n);
    segmentTree(v,0,0,n-1);
    int q; cin >> q;
    while(q--){
        cout << "Enter the elements : ";
        int l, r; cin >> l >> r;
        cout << getMax(l,r,0,0,n-1) << endl;
    }
}