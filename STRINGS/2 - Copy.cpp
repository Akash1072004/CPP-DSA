  #include<iostream>
  using namespace std;
  int main(){
    char s[]={'a','b','c','\0','d','e'};
    for(int i=0;s[i]!='\0';i++){
        cout<<s[i]<<" ";
    }
    cout<<endl<<s<<endl;
    //here in string we can use directly 'str' in cout ...
    //this will print all charater of string...
    //when we use '\0' then it will terminate the line from that position...
  }