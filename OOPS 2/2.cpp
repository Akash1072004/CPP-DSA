#include<iostream>
using namespace std;
class player{
private:
        int age;
        int score;

        public:

        void setScore(int score){
            this->score=score;
        }
        void setAge(int age){
            this->age=age;
        }
        int getScore(){
            return score;
        }
        int getAge(){
            return age;
        }
};
int main(){
    player Akash;
    Akash.setAge(20);
    Akash.setScore(90);

    player *Aman = new player; // memory allocaton in run time or dynamically...

    //method 1... BEST METHOD...
    Aman->setAge(24);
    Aman->setScore(100);

    // cout<<Aman->getAge()<<endl;

    //method 2...
    (*Aman).setAge(34);
    (*Aman).setScore(95);

    cout<<(*Aman).getScore()<<endl;

}