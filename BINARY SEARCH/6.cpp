#include<bits/stdc++.h>
using namespace std;
int sqrt(int x){ //find sqrt of any number...
    long long s = 1;
        long long e = x;
        while(s<=e){
            long long mid = s + (e-s)/2;
            if((mid*mid)==x)return mid;
            else {
                if((mid*mid)<x && ((mid+1)*(mid+1))>x)return mid;
                else if((mid*mid)>x && ((mid-1)*(mid-1))<x)return mid - 1;
                else if((mid*mid)>x)e=mid-1;
                else s=mid+1;
            }
        }
}
int main(){
    int x;
    cin>>x;
    cout<<sqrt(x);
}