#include <assert.h>
#include "Prey.h"
#include "Lion.h"
#include "Cheetah.h"
#include "Wolf.h"
#include "WildDog.h"

#include "LionFactory.h"
#include "CheetahFactory.h"
#include "WolfFactory.h"
#include "WildDogFactory.h"

#include "PreyStore.h"
#include "PredatorStore.h"
int main()
{
  cout<<
    "/************************************************************/"<<endl
  <<"/************************** TASK 1 **************************/"<<endl
  <<"/************************************************************/"<<endl
  <<endl;

    Predator **p = new Predator *[4];
    p[0] = new Lion("Lion Hunting", "Lion Special");
    p[1] = new Cheetah("Cheetah Hunting", "Cheetah Special");
    p[2] = new Wolf("Wolf Hunting", "Wolf Special");
    p[3] = new WildDog("WildDog Hunting", "WildDog Special");
    Prey *prey = new Prey(15, "Bok", 10);

    for (int i = 0; i < 4; i++)
    {
        p[i]->catchPrey(prey);
        p[i]->getAttacked(prey);
        p[i]->attack(prey);
        p[i]->die();
        p[i]->speciality();
        cout << endl;
    }

    // Memory free
    for (int i = 0; i < 4; i++)
        delete p[i];
    delete[] p;
    delete prey;
    p = nullptr;
    prey = nullptr;
    cout << endl;

  cout<<
    "/************************************************************/"<<endl
  <<"/************************** TASK 2 **************************/"<<endl
  <<"/************************************************************/"<<endl
  <<endl;

    p = new Predator *[4];
    prey = new Prey(15, "Bok", 10);
    PredatorFactory **pf = new PredatorFactory *[4];
    pf[0] = new LionFactory();
    pf[1] = new CheetahFactory();
    pf[2] = new WolfFactory();
    pf[3] = new WildDogFactory();
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        p[i] = pf[i]->createPredator("Hunting Method", "Speciality");
        p[i]->catchPrey(prey);
        p[i]->getAttacked(prey);
        p[i]->attack(prey);
        p[i]->die();
        p[i]->speciality();
        cout << endl;
    }

    // Memory free
    for (int i = 0; i < 4; i++)
    {
        delete p[i];
        delete pf[i];
    }
    delete[] p;
    delete prey;
    delete[] pf;
    p = nullptr;
    prey = nullptr;
    pf = nullptr;
    cout << endl;

  cout<<
    "/************************************************************/"<<endl
  <<"/************************** TASK 3 **************************/"<<endl
  <<"/************************************************************/"<<endl
  <<endl;

    /**
     * NB: Assertions are used here to test code, if an assertion fails, please check your clone method.
     */

    prey = new Prey(15, "Bok", 10);
    Prey *clonedPrey = prey->clone();

    assert(prey != clonedPrey);

    cout << "Prey 1:\nHP:\t\t" << prey->getHP() << "\nDamage:\t\t" << prey->getDamage() << "\nType:\t\t" << prey->getType() << endl;
    cout << "Prey 2:\nHP:\t\t" << clonedPrey->getHP() << "\nDamage:\t\t" << clonedPrey->getDamage() << "\nType:\t\t" << clonedPrey->getType() << endl
         << endl;

    assert(prey->getHP() == clonedPrey->getHP());
    assert(prey->getDamage() == clonedPrey->getDamage());
    assert(prey->getType() == clonedPrey->getType());

    prey->setHP(5);
    prey->setDamage(5);
    prey->setType("Buffalo");

    cout << "Prey 1:\nHP:\t\t" << prey->getHP() << "\nDamage:\t\t" << prey->getDamage() << "\nType:\t\t" << prey->getType() << endl;
    cout << "Prey 2:\nHP:\t\t" << clonedPrey->getHP() << "\nDamage:\t\t" << clonedPrey->getDamage() << "\nType:\t\t" << clonedPrey->getType() << endl
         << endl;

    assert(prey->getHP() != clonedPrey->getHP());
    assert(prey->getDamage() != clonedPrey->getDamage());
    assert(prey->getType() != clonedPrey->getType());

    delete clonedPrey;
    delete prey;
    clonedPrey = nullptr;
    prey = nullptr;
    cout << endl;

  cout<<
    "/************************************************************/"<<endl
  <<"/************************** TASK 4 **************************/"<<endl
  <<"/************************************************************/"<<endl
  <<endl;

	//create the prey
    Prey** preyArray = new Prey*[2];
    preyArray[0] = new Prey(15, "Bok", 2);
    preyArray[1] = new Prey(25, "Buffalo", 8);
    
	//create the predators
    Predator** predatorArray = new Predator* [4];
    PredatorFactory** f = new PredatorFactory* [4];
    f[0] = new LionFactory(); f[1] = new CheetahFactory(); f[2] = new WolfFactory(); f[3] = new WildDogFactory();
    predatorArray[0] = f[0]->createPredator("Tear", "Snarl");
    predatorArray[1] = f[1]->createPredator("Tire", "Gaff");
    predatorArray[2] = f[2]->createPredator("Rip", "Howl");
    predatorArray[3] = f[3]->createPredator("Nip", "Teamwork");
    
	//create the storage 
    PredatorStore** A = new PredatorStore* [4];
    PreyStore** B = new PreyStore* [2];
    for(int i=0;i<4;i++) A[i] = new PredatorStore(predatorArray[i]->backup());
    for(int i=0;i<2;i++) B[i] = new PreyStore(preyArray[i]->backup());
    
    //fightclub
    for(int x=0; x<4; x++){
	    for(int y=0; y<2; y++){
		Predator* M = predatorArray[x];
		Prey* N = preyArray[y]; 
		    
		//restore both animals to last stable version
		M->restore(A[x]->getBackup());
		N->restore(B[y]->getBackup());

		cout<<"PREDATOR STATS: [HP:"<<M->getHP()<<" Damage:"<<M->getDamage()<<"]"<<endl;
		cout<<"PREY STATS: [HP:"<<N->getHP()<<" Damage:"<<N->getDamage()<<"]"<<endl;
		    
		cout<<"HUNT COMMENCES: "<<endl;
		M->hunt(N);
		cout <<"HUNT CONCLUDED: "<< (M->getHP() > 0 ? "Predator Wins" : "Prey Wins") << endl<<endl;
		    
	    }
	    
    }
    
    
    delete [] predatorArray;
    delete [] preyArray;
    delete [] f;
    delete [] A;
    delete [] B;
    predatorArray = nullptr;
    preyArray = nullptr;
    f = nullptr;	

    return 0;
}
