#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int x;
void sort(vector<int>&v)
{
    int l=0,m=0,h=v.size()-1;
    
    while(m<=h){
        if(v[m]==2){
            swap(v[m],v[h]);
            h--;
        }
        else if (v[m]==0){
            swap(v[m],v[l]);
            m++;
            l++;
        }
        else if (v[m]==1)m++;
    }
    for(int i=0;i<x;i++){
        cout<<v[i]<<" ";
    }
}
int main()
{
    cin >> x;
    vector<int> v(x);
    cout << "number should be only 0,1 and 2 ";
    cout << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    sort(v);
}
