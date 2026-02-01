#include <iostream>
#include <vector>
using namespace std;
int x;
void first(int k, vector<int>&s,int f){
    int j = f+1;
  int h=x-1;
   while(j<=h){
    int temp = s[j];
    s[j]=s[h];
    s[h]=temp;
    j++;
    h--;
   }
   for(int i=0;i<x;i++){
    cout<<s[i]<<" ";
   }
    cout<<endl;
    int i=0;
   while(i<=f){
    int temp =s[i];
    s[i]=s[f];
    s[f]=temp;
    i++;
    f--;
   }
    for(int i=0;i<x;i++){
    cout<<s[i]<<" ";
   }
   cout<<endl;
   int l =0;
   int d = x-1;
  while(l<=d){
    int temp = s[l];
    s[l]=s[d];
    s[d]=temp;
    l++;
    d--;
  }
  cout<<"your required numbers are "<<endl;
   for(int i=0;i<x;i++){
    cout<<s[i]<<" ";
   }
   
}
int main(){
    int k;
    cin >> x;
    vector<int> v(x);
    for (int i = 0; i < x; i++)
    { 
        cin >> v[i];
    }
    cout << endl;
    cout << " how many element you want to rotate " << endl;
    cin >> k;
    if(k>x){
    k=k%x;//note this line....
    }
   first(k,v,x-k-1);  
}
