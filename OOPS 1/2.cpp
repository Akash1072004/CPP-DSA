#include<iostream>
using namespace std;
class player{ 
    public:
    int score;
    int health;
    void showhealth(){ // we can create a function...
        cout<<"health is "<<health;
    }
};
int main(){
    player Akash;
    Akash.score=90;
    Akash.health=100;
    cout<<"Akash\n";
    cout<<Akash.score<<endl;
    cout<<Akash.health<<endl;

    Akash.showhealth();
}