#if !defined(Prey_H)
#define Prey_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

#include "PreyBackup.h"
#include "PreyState.h"

using namespace std;
class Prey
{
private:
    int HP;
    string type;
    int damage;

public:
    Prey();
    Prey(int HP, string type, int damage);
    ~Prey();
    Prey *clone();
    int getHP();
    void setHP(int HP);
    string getType();
    void setType(string type);
    int getDamage();
    void setDamage(int damage);
    bool run();
    int fight();
    int takeDamage(int damage);

	//backup
    PreyBackup* backup();
    void restore(PreyBackup*);
};

#endif // Prey_H
