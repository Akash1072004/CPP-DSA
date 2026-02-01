#include <iostream>
#include <vector>
using namespace std;
int x;
void sort(vector<int>&v)
{
    int h = x - 1;
    int i=0;
    while(i<h){
        if(v[i]>0 && v[h]<0){
            int temp =v[i];
            v[i]=v[h];
            v[h]=temp;
            i++;
            h--;
        }
       else if(v[i]<0)i++;
        else if(v[h]>1)h--;
    }
    for(int i=0;i<x;i++){
        cout<<v[i]<<" ";
    }
}
int main()
{
    cin >> x;
    vector<int> v(x);
    cout << "number should be only 0 and 1 ";
    cout << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    sort(v);
}
