#include<iostream>
using namespace std;
// int fun(int x,int sum){  
//     if(x==0)return 0;
//     sum= x+fun(x-1,sum);
//     return sum;
// }
// int main(){
//     int x;
//     cin>>x;
//     int sum = 0;
//    cout<< fun(x,sum);
// }

//another way of solving this question...
int fun(int x,int sum){  
    if(x==0){
        cout<<sum;
        return 0;
    }
    fun(x-1,sum+x);
}
int main(){
    int x;
    cin>>x;
    int sum =0;
    fun(x,sum);
}