#include<iostream>
using namespace std;
int fun(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec)return 0;
    if(sr==er && sc==ec)return 1;
    int right=fun(sr,sc+1,er,ec);
    int down=fun(sr+1,sc,er,ec);
    return right + down;
}
int main(){ //maize problem : no. of ways to reach end when i can move only right and down...
    int a,b;
    cin>>a>>b;
   cout<< fun(0,0,a,b);
}