  #include<iostream>
  #include<string>
  using namespace std;
  int main(){
  // string s= "akash kumar";
  // cout<<s<<endl;
  // s.push_back(' ');
  // s.push_back('z');
  // s.push_back('y');
  // s.push_back('x');
  // cout<<s<<endl;
  // s.pop_back();
  // cout<<s;
  // cout<<endl;
  string str;
  getline(cin,str);
  string u;
  // cout<<str[0];
  for(int i=0;i<str.length();i++){
    u.push_back(str[i]);
  }
  cout<<u[2];

}