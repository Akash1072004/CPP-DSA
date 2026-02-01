#include<iostream>
using namespace std;
int stair(int x){
   if(x==1)return 1;
   if(x==2)return 2;
   return stair(x-1)+stair(x-2);
}
int main(){ //number of ways to jump on stairs if i have only 1 or 2 steps allowed to jump...
    int x;
    cin>>x;
   cout<< stair(x);
}