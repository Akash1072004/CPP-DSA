#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x;
    vector<int> v(x);
    for (int i = 0; i < x; i++)
    { // basically this is for print reverse number of given array
        cin >> v[i];
    }
    cout << endl;
    cout << "from where to where you want to reverse" << endl;
    cout << "from ";
    cin >> y;
    cout << "to ";
    cin >> z;
    for(int i=0;i<x;i++){
        if(i>=y && i<=z) cout<<v[x-1-i]<<" ";
        else if(i<y || i>z ) cout<<v[i]<<" ";
    }
    
}