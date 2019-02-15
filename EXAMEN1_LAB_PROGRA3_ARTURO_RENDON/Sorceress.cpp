#include "Sorceress.h"

Sorceress::Sorceress()
{
	this->strength = 20;
	this->magic = 50;
	this->def = 20;
	this->magicDef = 50;
	this->hp = 100;
}

void Sorceress::special(Character* a)
{
	this->hp = a->hp;
	a->hp = this->hp;
}
