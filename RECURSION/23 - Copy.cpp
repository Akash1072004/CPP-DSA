#include<iostream>
using namespace std;
void disk(int x,char a,char b,char c){
    if(x==0)return;
    disk(x-1,a,c,b);
    cout<<a<<" -> "<<c<<endl;
    disk(x-1,b,a,c);
}
int main(){ //TOWER OF HANOI ... A = SOURCE , B = HELPER , C = DESTINATION...
    int x;
    cin>>x;
    disk(x,'A','B','C');
}