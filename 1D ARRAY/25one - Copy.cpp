#include <iostream>
#include <vector>       //traping rain water....
using namespace std;
int x;
void rain(vector<int> &v)
{
    vector<int> v1(x);
    v1[0]=-1;
    int max = v[0];
    for (int i = 1; i < x; i++)
    {
        v1[i] = max;
        if (max < v[i]) max = v[i];
    }
    v1[x-1]=-1;
      int max1 = v[x-1];
    for (int i = x-2; i >= 0; i--)
    {
        if(max1<v1[i]) v1[i] = max1;
        if(max1<v[i])max1=v[i];
    }
    cout<<endl;
    int b,c=0;
    for(int i=0;i<x;i++){
        if(v1[i]>v[i])b=v1[i]-v[i];
        else continue;
        c=c+b;
    } 
    cout<<"total number of blocks of water is "<<c;
}
int main()
{
    cin>>x;
    vector<int> v(x);
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    rain(v);
}