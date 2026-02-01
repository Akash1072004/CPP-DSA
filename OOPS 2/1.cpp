#include<iostream>
using namespace std;
class player{
private:
    int age;
    int score;
    int health;
    bool alive;

public:
    void setAge(int age){
        this->age = age;
    }
    void setScore(int score){
        this->score = score;
    }
    void setHealth(int health){
        this->health = health;
    }
    bool setAlive(int alive){
        this->alive = alive;
    }

    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
    bool getAlive(){
        return alive;
    }
};
int addscore(player a,player b){
    return a.getScore() + b.getScore();
}
player maxScore(player a,player b){ // return all property of player value ...
    if(a.getScore()>b.getScore()) return a;
    else return b;
}
int main(){
    player Alice;
    Alice.setScore(15);
    Alice.setAge(22);
    Alice.setHealth(100);
    Alice.setAlive(true);

    player Bob;
    Bob.setScore(20);
    Bob.setAge(15);
    Bob.setHealth(100);
    Bob.setAlive(false);
    
    cout<<addscore(Alice,Bob)<<endl;
    player Raghav = maxScore(Alice,Bob); // in this raghav all the property of return value store in it , here all the propety of alice store in raghav...
    cout<<"Score : "<<Raghav.getScore()<<endl;
    cout<<"Alive : "<<Raghav.getAlive();

}