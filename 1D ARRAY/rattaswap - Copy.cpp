#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
  int temp=x;//ratta mar nhi to bhool jayega.....
  x=y;
  y=temp;
    return;
}
int main(){
    int a,b;
    cin>>a>>b;

    swap(a,b);
    cout<<a<<" "<<b<<endl;
    cout<< "ratta mar nhi to bhool jayega.....";
}