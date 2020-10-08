#if !defined(Lion_H)
#define Lion_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Predator.h"

using namespace std;
class Lion : public Predator
{
public:
    Lion(string method, string speciality);
    bool catchPrey(Prey* p);
    bool getAttacked(Prey* p);
    bool attack(Prey* p);
    void die();
    void speciality();
};

#endif // Lion_H
