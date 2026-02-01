#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x,a;
    cin>>x;
    int y=0;
    vector<int>v(a);
   while(x!=0){
        int l=x%10;
        x=x/10;
        v[y]=l;
        y++;
    }
     a=y;
    for(int i=0;i<y;i++){
        int b=0;
       for(int j=i+1;j<y;j++){
        if(v[j]==v[i-1]) continue;
        else{
            if(v[j]==v[i])b++;
            else continue;  
        }
       }if(v[i]!=v[i-1]){
       cout<<v[i]<<" -> "<<b+1<<endl;
       }
    }

}