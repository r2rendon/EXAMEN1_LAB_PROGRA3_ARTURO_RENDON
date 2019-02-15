#include "Character.h"
#include <iostream>

Character::Character()
{
	
}

void Character::attack(Character* a)
{
	
	if (this->strength <= a->def)
	{
		a->hp = a->hp;
	}
	else
	{
		a->hp = a->hp - (this->strength - a->def);
	}

	if (a->hp < 0)
	{
		a->hp = 0;
	}

}

void Character::cast(Character* a)
{

	if (this->magic <= a->magicDef)
	{
		a->hp = a->hp;
	}
	else
	{
		a->hp = a->hp - (this->magic - a->magicDef);
	}

	if (a->hp < 0)
	{
		a->hp = 0;
	}

}

void Character::special(Character* a)
{}

bool Character::operator<(Character a)
{

	if (a.hp > this->hp)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Character::operator>(Character a)
{

	if (this->hp > a.hp)
	{
		return true;
	}
	else
	{
		return false;
	}
}