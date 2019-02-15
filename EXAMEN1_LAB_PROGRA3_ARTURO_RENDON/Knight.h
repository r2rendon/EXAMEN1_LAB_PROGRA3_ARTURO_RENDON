#ifndef KNIGHT_H
#define KNIGHT_H

#include "Warrior.h"

class Knight:public Warrior
{
public:
	Knight();

	void special(Character*) override;

};

#endif // !KNIGHT_H