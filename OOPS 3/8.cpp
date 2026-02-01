#include<iostream>
using namespace std;
class vechile{
    public:
    virtual void calculatedMilage()=0;
    virtual void refuel()=0; // these two lines means that declaration of 'calculatedMilage' and 'refuel' is present here and definition of these are present in vechile's child like 'Bike'...
};
class Bike : public vechile{
    public:
    void calculatedMilage(){ // we have to write definition these or write the work of function like i have write here in this function like in "cout<<"Bike milage"<<endl:"...
        cout<<"Bike milage"<<endl;
    }
    void refuel(){
        cout<<"Bike refuel"<<endl;
    }
};
int main(){
   
Bike a;
a.calculatedMilage();
a.refuel();

}