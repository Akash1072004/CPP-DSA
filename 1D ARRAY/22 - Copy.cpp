#include <iostream>
#include <vector>
using namespace std;
int x;
int b = 0,f = 0,m;
int rain(vector<int> &v)
{
    int a;
    for (int i = 1; i < x - 1; i++)
    {
        if (v[i] < v[i + 1] && v[i] < v[i - 1])
        {
            if (v[i - 1] < v[i + 1])
            {
                a = v[i - 1] - v[i];
                // cout << a;
                i++;
                // cout<<endl;
            }
            else
            {
                a = v[i + 1] - v[i];
                // cout << a;
                i++;
                // cout<<endl;
            }
        }
        else
            continue;
        b = b + a;
    }
    
   return b;
    
}
int second(vector<int>&v){
     int c, d, e, g, h, k = 0;
    for (int i = 2; i < x - 2; i++)
    {
        if (v[i - 1] == 0 && v[i + 1] == 0 && v[i] <= v[i + 2] && v[i] <= v[i - 2])
        {
            if (v[i + 2] == v[i - 2])
            {
                h = v[i + 2];
                m = 3 * h - v[i];
                cout << "m = " << m;
                cout << endl;
            }
            else 
            {
                if (v[i + 2] > v[i - 2])
                  {
              e = v[i -2];
              g=3*e-v[i];
                  }
                else  e = v[i + 2];
                g=3*e-v[i];
                cout << "g = " << g << endl;
                 f = f + g;
            }
        }
        else
            continue;
       
    }
    cout << "k = " << k << endl;
    cout << "f = " << f;
    cout << endl;
    return f+m;
}
int main()
{
    cin >> x;
    vector<int> v(x);
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    rain(v);
    cout << b;
    cout << endl;
    second(v);
    cout << "total number of block of water is " << f + b + m;
}//[0,1,0,2,1,0,1,3,2,1,2,1]