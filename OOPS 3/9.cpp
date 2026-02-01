#include<iostream>
using namespace std;
class complexNum{
    public:
    int real;
    int imaginary;
    public:
    complexNum add(complexNum &c1){ // call by referance so that there is not any infinite calls...
        complexNum c2;
        c2.real = c1.real + this->real;
        c2.imaginary = c1.imaginary + this->imaginary;
        return c2;
    }

    complexNum operator +(complexNum &c1){
        complexNum c2;
        c2.real = c1.real + this->real;
        c2.imaginary = c1.imaginary + this->imaginary;
        return c2;
    }
    complexNum operator -(complexNum &c1){
        complexNum c2;
        c2.real = c1.real - this->real;
        c2.imaginary = c1.imaginary - this->imaginary;
        return c2;
    }
};
int main(){
    complexNum a1,a2;
    a1.real = 10;
    a1.imaginary = 5;
    a2.real = 9;
    a2.imaginary = 3;

    // method 1...
    complexNum c3 = a1.add(a1);
    complexNum c4 = a1.add(a2);
    cout<<"real "<<c3.real<<" img "<<c3.imaginary<<endl;
    cout<<"real "<<c4.real<<" img "<<c4.imaginary<<endl;
    
    // method 2...BEST METHOD...
    complexNum c5 = a1 + a2; // this can be done by using 'operator +' function as we done above...
    cout<<"real "<<c5.real<<" img "<<c5.imaginary<<endl;

    complexNum c6 = a1-a2; // can be done by using 'operator -'...
    cout<<"real "<<c6.real<<" img "<<c6.imaginary<<endl;

    complexNum c7 = a1 + a2 + a2; // this accuatly is happening because of 1st it will do like 'a3=a1+a2' then will do 'a3+a2' and finally it look like '[(a1+a2)+a3]' ...
    cout<<"real "<<c7.real<<" img "<<c7.imaginary<<endl;

}