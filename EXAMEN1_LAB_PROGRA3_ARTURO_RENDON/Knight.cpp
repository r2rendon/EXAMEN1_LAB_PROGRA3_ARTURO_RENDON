#include "Knight.h"

Knight::Knight()
{
	this->strength = 60;
	this->magic = 40;
	this->def = 60;
	this->magicDef = 30;
	this->hp = 200;
}

void Knight::special(Character* a)
{
	a->def = 0;
}
