#include <iostream>
#include <vector>
using namespace std;
int x;
void s(int y,vector<int>&v){
    vector<int>b(x); 
    for(int i=0;i<x;i++){
        b[i]=v[i];
    }
    for(int i=0;i<y;i++){
        b[i]=b[x-y+i];
    }
    for(int i=y;i<x;i++){
        b[i]=v[i-y];
    }
    for(int i=0;i<x;i++){
        cout<<b[i]<<" ";
    }
}
int main()
{
    int y;
    cin >> x;
    vector<int> v(x);
    for (int i = 0; i < x; i++)
    { 
        cin >> v[i];
    }
    cout << endl;
    cout << " how many element you want to rotate " << endl;
    cin >> y;
   s(y,v);
}
