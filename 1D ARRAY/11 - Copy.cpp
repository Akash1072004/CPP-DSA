#include <iostream>
#include <vector>
using namespace std;
int x;
void sort(vector<int>&v){
   int noz = 0;
   int noo=0;
   for(int i=0;i<x;i++){
    if(v[i]==0)noz++;
    else noo++;
   }
   for(int i=0;i<x;i++){
    if(i<noz)v[i]=0;
    else v[i]=1;
   }
    for(int i=0;i<x;i++){
    cout<<v[i]<<" ";
   }
}
int main(){
    cin >> x;
    vector<int> v(x);
    cout<<"number should be only 0 and 1 ";
    cout<<endl;
        for (int i = 0; i < x; i++)
    { 
        cin >> v[i];
    }
   sort(v);  
}
