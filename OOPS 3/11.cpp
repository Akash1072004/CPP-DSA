#include<iostream>
using namespace std;
class complexNum{
    public:
    int real;
    int imaginary;

    friend complexNum operator +(complexNum &c1,complexNum &c2); // this is also a method of adding two binary by using 'friend' ...
};
complexNum operator +(complexNum &c1 , complexNum &c2){
    complexNum c3;
    c3.real = c1.real+c2.real;
    c3.imaginary = c1.imaginary+c2.imaginary;
    return c3;
}
int main(){
    complexNum c1,c2;
    c1.real = 10;
    c1.imaginary = 5;
    c2.real = 13;
    c2.imaginary = 14;
    complexNum c3=c1+c2;
    cout<<"real "<<c3.real<<" img "<<c3.imaginary<<endl;

}