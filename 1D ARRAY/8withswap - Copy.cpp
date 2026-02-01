#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x;
    vector<int> v(x);
    for (int i = 0; i < x; i++)
    { 
        cin >> v[i];
    }
    cout << endl;
    cout << "from where to where you want to reverse" << endl;
    cout << "from ";
    cin >> y;
    cout << "to ";
    cin >> z;
    while(y<z){
        int temp = v[y];
        v[y]=v[z];
        v[z]=temp;
        y++;
        z--;
    }
    for(int i=0;i<x;i++){
        cout<<v[i]<<" ";
    }
    
}