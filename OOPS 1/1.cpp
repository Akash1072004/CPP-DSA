#include<iostream>
using namespace std;
class player{ // this is used to store data for/about any object...
    public:
    int score;
    int health;
};
int main(){
    player Akash;
    Akash.score=90;
    Akash.health=100;
    cout<<"Akash\n";
    cout<<Akash.score<<endl;
    cout<<Akash.health<<endl;
    
    player Aman;
    cout<<"Aman\n";
    Aman.score=100;
    Aman.health=100;
    cout<<Aman.score<<endl;
    cout<<Aman.health<<endl;
}