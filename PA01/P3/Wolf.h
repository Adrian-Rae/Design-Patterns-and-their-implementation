#if !defined(Wolf_H)
#define Wolf_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Predator.h"

using namespace std;
class Wolf : public Predator
{
public:
    Wolf(string method, string speciality);
    bool catchPrey(Prey* p);
    bool getAttacked(Prey* p);
    bool attack(Prey* p);
    void die();
    void speciality();
};

#endif // Wolf_H
