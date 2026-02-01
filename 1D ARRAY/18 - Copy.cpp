#include <iostream>  //learn this method
#include <vector>    //very important concept
using namespace std; // dutch flag method
void sort(vector<int> &v, vector<int> &v1)
{
    int n = v.size();
    int m = v1.size();
    vector<int> v3(m + n);
    int i = n - 1;
    int j = m - 1;
    int k = (m + n) - 1;

   while (i >= 0 && j >= 0) {
        if (v[i] < v1[j]) {
            v3[k] = v1[j];
            j--;
             k--;
        } else {
            v3[k] = v[i];
            i--;
             k--;
        }
       
    }

    while (j >= 0) {
        v3[k] = v1[j];
        j--;
        k--;
    }
    while (i >= 0) {
        v3[k] = v[i];
        i--;
        k--;
    }
    for(int i=0;i<m+n;i++){
        cout<<v3[i]<<" ";
    }
}

int main()
{
    int x;
    cout << "Enter the no. of Element you want to give \n";
    cin >> x;

    vector<int> v(x);
    for (int i = 0; i < x; i++)
    {
        int y;
        cin >> y;
        v[i] = y;
    }
    int m;
    cout << "Enter the no. of Element you want to give \n";
    cin >> m;

    vector<int> v1(m);
    for (int i = 0; i < m; i++)
    {
        int n;
        cin >> n;
        v1[i] = n;
    }

    sort(v, v1);
}