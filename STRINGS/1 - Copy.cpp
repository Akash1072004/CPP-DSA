  #include<iostream>
  using namespace std;
  int main(){
    char s[]={'a','b','c'};
    cout<<s[0]<<" "<<s[2];
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<s[i]<<" ";
    }
    //Note : \t is used to give tab space ....
    // \0 is used to terminate the line ....
    cout<<"hello i am \nAkash kumar ";
    cout<<"\nhello i am \tAkash kumar ";
    cout<<"\nhello i am Akash\0 kumar ";
  }