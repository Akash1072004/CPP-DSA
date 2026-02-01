#include<iostream>
using namespace std;
class Gun{
    public:
    int amo;
    int damage;
    int scope;
};
class player{
    private:
    class Helmet{
        int level;
        int hp;

        public:
        void setHp(int hp){
            this->hp=hp;
        }
        void setLevel(int level){
            this->level = level;
        }
        int getHp(){
            return hp;
        }
        int getLevel(){
            return level;
        }
    };
    int age;
    int score;
    Gun gun;
    Helmet helmet;

    public:

    void setHelmet(int level){
        Helmet *helmet=new Helmet;
        helmet->setLevel(level);

        int health=0;
        if(level==1)health = 25;
        else if(level==2)health = 50;
        else if(level==3)health = 100;
        else cout<<"error";

        helmet->setHp(health); 
        this->helmet= *helmet;
    }
    
    void setAge(int age){
        this->age = age;
    }
    void setScore(int score){
        this->score = score;
    }
    void setGun(Gun gun){
        this->gun = gun;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    Gun getGun(){
        return gun;
    }
    void getHelmet(){
        cout<<helmet.getHp()<<endl;
        cout<<helmet.getLevel()<<endl;
    }

};

int main(){
    Gun akm;
    akm.amo=40;
    akm.damage=50;
    akm.scope=2;

    player Akash;
    Akash.setAge(20);
    Akash.setScore(90);
    Akash.setGun(akm);
    Akash.setHelmet(3);

    Gun AkashGun = Akash.getGun();
    cout<<AkashGun.damage<<endl;
    cout<<AkashGun.amo<<endl;

    Akash.getHelmet();


}