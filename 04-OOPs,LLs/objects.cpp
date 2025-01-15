#include<bits/stdc++.h>
using namespace std;

class Hero{
    int health;
    public:
    char level;
    Hero(int health){   //constructor
          cout<<this<<endl;
          this->health=health;
    }
    void setHealth(int h){
        this->health=h;
    }
    int getHealth(){
        return health;
    }
};
int main(){
    Hero *ramesh=new Hero(10);  // dynamic object creation
    cout<< sizeof(*ramesh)<< endl;
    ramesh->setHealth(70);
    cout<< ramesh->getHealth()<<endl;
    Hero s(*ramesh);
    cout<<s.getHealth();
    }