#include<iostream>
        cout<<"hero id: "<<heroid<<endl;
        cout<<"level: "<<level<<endl;
        cout<<"class type: "<<classtype<<endl;
        cout<<"health: "<<health<<endl;
        cout<<"mana: "<<mana<<endl;
        cout<<"strength: "<<strength<<endl;
        cout<<"magic: "<<magic<<endl;
        cout<<"defense: "<<defense<<endl;
        cout<<"available: "<<available<<endl;
        cout<<"herorank: "<<herorank<<endl;
    }
    void levelup(int level, int strength,int magic, int defense){
            level+=10;
            strength+=5;
            magic++;
            defense+=10;
        }
     void takedamage(int damage){
        health= health-damage;
     }
     void restoreHealth(int health){
        health=health+1;
     }
     void assignToFortress(Fortress& fortress);
     void fightEnemy(Enemy& enemy);
class 

}
