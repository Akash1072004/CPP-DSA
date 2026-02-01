#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int x;
void pmc(vector<int> &v)
{
    int fac =1;
    for(int i=1;i<=x;i++){
        fac=fac*i;
    }
    // cout<<fac<<endl;
    cout<<"(";
    for(int i=0;i<x;i++){
        cout<<v[i]<<",";
    }
    cout<<")";
    for(int j=0;j<fac-1;j++){
    int idx;
    for (int i = x - 1; i >= 0; i--)
    {
        if (v[i - 1] < v[i])
        {
            idx = i;
            break;
        }
    }
    // cout << idx << endl;
    int i = idx;
    int h = x - 1;
    while (i < h)
    {
        int temp = v[i];
        v[i] = v[h];
        v[h] = temp;
        i++;
        h--;
    }
    // for (int i = 0; i < x; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    int y;
    for (int i = idx; i < x; i++)
    {
        if (v[i] > v[idx - 1])
        {
            y = i;
            break;
        }
    }
    // cout << y << endl;
    // cout << v[idx-1] << endl;
    swap(v[y], v[idx - 1]);
    // cout << "next largest number is ";
    cout<<"(";
    for (int i = 0; i < x; i++)
    {
        cout << v[i] << ",";
    }
    cout<<")";
    }
}
void sort(vector<int>&v){
    sort(v.begin(),v.end());
    // for(int i=0;i<x;i++){
    //     cout<<v[i]<<" ";
    // }
    pmc(v);
}
int main()
{
    cin >> x;
    vector<int> v(x);
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    sort(v);
}