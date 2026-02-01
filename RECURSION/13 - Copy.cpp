#include<iostream>
using namespace std;
// int fun(int sr,int sc,int er,int ec,string s){
//     if(sr>er || sc>ec)return 0;
//     if(sr==er && sc==ec){
//         cout<<s<<endl;
//     }
//     fun(sr,sc+1,er,ec,s+'R');
//     fun(sr+1,sc,er,ec,s+'D');
// }
void fun(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec)return;
    if(sr==er && sc==ec){  // this is another method to do this same problem...
        cout<<s<<endl;
    }
    fun(sr,sc+1,er,ec,s+'R');
    fun(sr+1,sc,er,ec,s+'D');
}
int main(){ //maize problem : no. of ways to reach end when i can move only right and down...
    int a,b;//print all the ways...
    cin>>a>>b;
    fun(0,0,a,b,"");
}