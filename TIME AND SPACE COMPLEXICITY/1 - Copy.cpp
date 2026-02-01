#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[8]={6,3,1,7,2,4,5,1};
    int s=0;
    for(int i=0;i<8;i++){
        s=s+a[i];
    }
    int s1=(7*(7+1))/2;
    cout<<"missing number is "<<s-s1;
}