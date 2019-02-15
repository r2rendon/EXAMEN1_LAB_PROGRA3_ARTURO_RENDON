#include "Berserk.h"

Berserk::Berserk()
{
	this->strength = 80;
	this->magic = 50;
	this->def = 45;
	this->magicDef = 15;
	this->hp = 150;
}

void Berserk::special(Character* a)
{

	a->hp = a->hp - this->strength;

	if (a->hp < 0)
	{
		a->hp = 0;
	}

}
