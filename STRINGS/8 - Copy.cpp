  #include<iostream>
  #include<string>
  #include<algorithm>
  using namespace std;
  int main(){
  string s="Akash kumar";
//   reverse(s.begin(),s.end());
  cout<<s<<endl;
  reverse(s.begin()+2,s.end()-7);
  // reverse(s.begin()+2,s.begin()+5);
  cout<<s<<endl;
  //we can use both
  //     |
  //     |
  //    \|/
  // reverse(s.begin()+2,s.end()-7); or reverse(s.begin()+2,s.begin()+5);
  //but when we use "begin" then we use one more number of index
  //mean if IN Akash 's' position is in 3rd index then we have to use index + 1 which is 3rd + 1 = 4th index....
}