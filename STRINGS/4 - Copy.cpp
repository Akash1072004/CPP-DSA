  #include<iostream>
  #include<string>
  using namespace std;//vowel count..
  int main(){
   string s;
   getline(cin,s);
   int a=0;
   for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]== 'e' || s[i]=='i' || s[i]=='o' || s[i]=='u')a++;
        else continue;
} 
cout<<a;
}