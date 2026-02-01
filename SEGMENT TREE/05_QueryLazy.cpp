#include <bits/stdc++.h>
using namespace std;
vector<int>st;
vector<int>lazy;
void segmentTree(vector<int>&v, int i, int low, int high){
    if(low == high){
        st[i] = v[low];
        return;
    }
    int mid = (low + high) >> 1; // (low + high)/2 ...
    segmentTree(v,(2*i)+1,low,mid); // left subtree
    segmentTree(v,(2*i)+2,mid + 1,high); // right subtree
    st[i] = st[(2*i)+1] + st[(2*i)+2];
}
int getSum(int l, int r, int i, int low, int high){ 
    if(lazy[i] != 0){
        lazy[2*i+1] += lazy[i];    
        lazy[2*i+2] += lazy[i]; 
        st[i] += lazy[i];
        lazy[i] = 0;   
    }
    if(r < low or l > high)return 0;
    if(low >= l and high <= r)return st[i];
    int mid = (low + high)>> 1;
    int leftSum = getSum(l,r,2*i + 1,low,mid);
    int rightSum = getSum(l,r,2*i + 2,mid+1,high);
    return leftSum + rightSum;
}
void updateRange(int l, int r, int lo, int hi,int i, int val){
    if(lazy[i] != 0){
        lazy[2*i+1] += lazy[i];    
        lazy[2*i+2] += lazy[i]; 
        st[i] += lazy[i];
        lazy[i] = 0;   
    }
    if(r < lo or l > hi) return;
    if(lo >= l and hi <= r){
        int rangeSize = hi - lo + 1;
        st[i] += val*rangeSize;
        lazy[2*i+1] += val;    
        lazy[2*i+2] += val;
        return;
    }
    int mid = (lo+hi)>>1;
    updateRange(l,r,lo,mid,2*i+1,val);
    updateRange(l,r,mid+1,hi,2*i+2,val);
    st[i] = st[(2*i)+1] + st[(2*i)+2];
}
int main(){
    vector<int>v = {1,4,2,8,6,4,9,3};
    int n = v.size();
    st.resize(4*n);
    lazy.resize(4*n,0);
    segmentTree(v,0,0,n-1);
    cout << "Enter the elements : ";
    int l, r; cin >> l >> r;
    cout << getSum(l,r,0,0,n-1) << endl;
    updateRange(l,r,0,n-1,0,10);
    cout << getSum(l,r,0,0,n-1) << endl;
}