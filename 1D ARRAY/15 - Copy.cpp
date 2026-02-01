#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int x,y;
void sort(vector<int>&v,vector<int>&s)
{
   int m = v.size();
   int n=s.size();
   
}
int main()
{
    cin >> x;
    vector<int> v(x);
     vector<int> s(y);
    cout << "number of 1st array";
    cout << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
     cin>>y;
     cout << "number of 2nd array";
    cout << endl;
    for (int i = 0; i < y; i++)
    {
        cin >> s[i];
    }
    sort(v,s);
}
