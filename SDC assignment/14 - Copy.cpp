#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    int a=n;
    for (int i = 1; i <= 2*n; i++)
    {
        if(i<=n){
            for(int j=1;j<=n-i;j++){
                cout<<"  ";
            }
            for(int k=1;k<=2*i-1;k++){
                cout<<"* ";
            }
            cout<<endl;
        }
        else if(i>n){
            for(int j=1;j<=i-n;j++){
                cout<<"  ";
            }
            for(int k=1;k<=2*a-3;k++){
                cout<<"* ";
            }
            a=a-1;
            cout<<endl;
        }
    }
}