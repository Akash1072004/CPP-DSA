#include<iostream>
using namespace std;
class player{
    private:
    int health;
    int score;
    
    public:
    void setscore(int s){
        score = s;
    }
    void sethealth(int h){
        health = h;
    }
    int getscore(){
        return score;
    }
    int gethealth(){
        return health;
    }
};
int main(){
    player harsh;
    harsh.setscore(100);
    harsh.sethealth(90);
    cout<<harsh.getscore()<<endl;
    cout<<harsh.gethealth();
}