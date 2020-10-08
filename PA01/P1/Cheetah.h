#if !defined(Cheetah_H)
#define Cheetah_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Predator.h"

using namespace std;
class Cheetah : public Predator
{
public:
    Cheetah(string method,string speciality);
    bool catchPrey(Prey* p);
    bool getAttacked(Prey* p);
    bool attack(Prey* p);
    void die();
    void speciality();
};

#endif // Cheetah_H
