#include<iostream>
using namespace std;
class books{
    public:
    string name; // in this question we check if book present then return true else false...
    int price;    // we also check if the price of book greater than the user price which he gave then return false else true ... think like real world problem...
    int pages;

    int countBooks(int p){
        if(p>price)return 1;
        else return 0;
    }
    bool isBookPresent(string s){
        if(s==name)return  true;
        else return false;
    }
};
int main(){
    books spaceScience;
    spaceScience.price=1000;
    spaceScience.name="A Brief History Of Time";

    cout<<spaceScience.countBooks(2000)<<endl;
    cout<<spaceScience.isBookPresent("A Brief History Of Time");
}