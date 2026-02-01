#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int temp;
    while(x!=0){ // given x and we have to find the number which is 2 to pow something and this should be less then the given number x...
        temp=x;
        x=x&(x-1); // use same method as used in previous question...
    }
    cout<<temp;
}
// concept used here is...
// let's say x=24 so its binary form is 11000 and the number which is 2 to pow something and just less than the given number x is 16 which is 2 to pow 4
// so binary of 16 is 10000 so here we have to do only that we have to remove all setbit that is same done as done in previous question where we count the setbit 
// when we left the last setbit then this binary number when coverted to decimal is the answer we are finding...