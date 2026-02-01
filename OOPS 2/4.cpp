#include<iostream>
using namespace std;

class cricketer{
    private:
    char name ;
    int age;
    int matches;

    public:

    void setName(char name){
        this->name=name;
    }
    void setAge(int age){
        this->age=age;
    }
    void setMatches(int matches){
        this->matches = matches;
    }
    char getName(){
        return name;
    }
    int getMatches(){
        return matches;
    }
    int getAge(){
        return age;
    }
};

int main(){
    cricketer virat;
    virat.setName('V');
    virat.setAge(30);
    virat.setMatches(80);

    cricketer dhoni;
    dhoni.setName('D');
    dhoni.setAge(40);
    dhoni.setMatches(100);

    cricketer cricketers[2]={virat,dhoni};
    for(int i=0;i<2;i++){
        cout<<cricketers[i].getName()<<endl;
        cout<<cricketers[i].getMatches()<<endl;
        cout<<cricketers[i].getAge()<<endl;
    }
}