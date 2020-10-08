#if !defined(Predator_H)
#define Predator_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Prey.h"

#include "PredatorState.h"
#include "PredatorBackup.h"

using namespace std;
class Predator
{
private:
    int HP;
    string method;
    int damage;
    string specialityName;

public:
	//constructors and destructors
    Predator();
    Predator(string method,string speciality,int HP, int damage);
    ~Predator();
    Predator *clone();
	//getters and setters
    int getHP();
    void setHP(int HP);
    string getMethod();
    void setMethod(string method);
    int getDamage();
    void setDamage(int damage);
    string getSpeciality();
    void setSpeciality(string speciality);
    
	//methods
    void hunt(Prey* p);
    virtual bool catchPrey(Prey* p);
    virtual bool getAttacked(Prey* p);
    virtual bool attack(Prey* p);
    virtual void die();
    virtual void speciality();

	//backup
    PredatorBackup* backup();
    void restore(PredatorBackup*);

};

#endif // Predator_H
