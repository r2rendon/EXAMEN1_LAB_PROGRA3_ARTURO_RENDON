#ifndef BERSERK_H
#define BERSERK_H

#include "Warrior.h"

class Berserk:public Warrior
{
public:
	Berserk();
	


	void special(Character* a) override;

};

#endif // 