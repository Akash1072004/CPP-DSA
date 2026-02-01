#include<iostream>
using namespace std;
class A{
    private:
    int a_private = 10;
    public:
    friend void show(A &b);
};
void show(A &b){
    cout<<b.a_private;
}
int main(){
   A b;
   show(b);
}