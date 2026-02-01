#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    if(n%2==0){
        n=n-1;
    }
    int m = n/2 + 1;
    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=n;j++){
            if(i==m || j==m){
                cout<<"* ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
}