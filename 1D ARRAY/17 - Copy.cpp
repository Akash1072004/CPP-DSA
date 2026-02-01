#include <iostream>  //learn this method
#include <vector>    //very important concept
using namespace std; // dutch flag method
void sort(vector<int> &v, vector<int> &v1)
{
    int n, m;
    n = v.size();
    m = v1.size();
    vector<int> v3(n + m);
    int i = 0;
    int j = 0;
    int k = 0;
    while (i <= n && j <= m)
    {
        if (v[i] < v1[j])
        {
            v3[k] = v[i];
            i++;
            k++;
        }
        else
        {
            v3[k] = v1[j];
            j++;
            k++;
        }
    }
    if (i == n)
    {
        while (j <= m)
        {
            v3[k] = v1[j];
            j++;
            k++;
        }
    }
    if (j == m)
    {
        while (i < n)
        {
            v3[k] = v[i];
            i++;
            k++;
        }
    }
    for (int i = 0; i < (n+m); i++)
    {
        cout << v3[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the no. of Element you want to give \n";
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        v[i] = y;
    }
    int y;
    cout << "Enter the no. of Element you want to give \n";
    cin >> y;

    vector<int> v1(y);
    for (int i = 0; i < y; i++)
    {
        cin >>  v1[i];
    }

    sort(v, v1);
}