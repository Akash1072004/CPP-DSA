  #include<iostream>
  #include<string>
  using namespace std;
  int main(){
   string s;
   getline(cin,s);
   char a,b;
    cout<<"enter the letter you want to update\n";
    cin>>a;
    cout<<"enter the letter you want to give\n";
    cin>>b;
    for(int i=0;i<s.size();i++){
        if(s[i]==char(a))s[i]=char(b);  
    }
    cout<<s;
}