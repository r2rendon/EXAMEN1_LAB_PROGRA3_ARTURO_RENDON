#include "Priest.h"

Priest::Priest()
{
	this->strength = 30;
	this->magic = 40;
	this->def = 35;
	this->magicDef = 60;
	this->hp = 125;
}

void Priest::special(Character* a)
{
	a->hp += this->magic;
}
