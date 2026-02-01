#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    for(int i=0; i<(v.size()); i++){
        cout<<v[i]<<" ";

    }  
    cout<<endl ;
    cout<<"The size is "<<v.size()<<endl;
    cout<<"The capacity is "<<v.capacity()<<endl;
    cout<<endl;
    v.pop_back();//this will only remove the one value
    v.pop_back();//not change the capacity
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
     for(int i=0; i<(v.size()); i++){
        cout<<v[i]<<" ";
        

    } 
    cout<<endl;
        cout<<"The size is "<<v.size()<<endl;
        cout<<"The capacity is "<<v.capacity()<<endl;
 
   

    

        
    }