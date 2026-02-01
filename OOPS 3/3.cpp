#include<iostream>
using namespace std;
class Bike{
    public:
    static int noOfBikes;
    int tyreSize;
    int engineSize;

    public:
    Bike (int tyreSize,int engineSize){ // constructor...
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
    }
    // ~Bike(){
    //     cout<<"destrutor call hua!"<<endl;
    // }

    static void increaseBikes(){
        noOfBikes++;
    }

};
int Bike::noOfBikes=10; 
int main(){
    Bike tvs(30,40);
    Bike pulsar(20,60);
    bool flag = true;
    // if(flag==true){
    //     Bike bmw(40,100);
    //     cout<<bmw.tyreSize<<" "<<bmw.engineSize<<endl;
    // }
    // cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    // cout<<pulsar.tyreSize<<" "<<pulsar.engineSize<<endl;
    tvs.increaseBikes(); // this is call for only tvs but it increase the value for all bikes...
    cout<<tvs.noOfBikes<<endl;
    cout<<pulsar.noOfBikes<<endl;

}