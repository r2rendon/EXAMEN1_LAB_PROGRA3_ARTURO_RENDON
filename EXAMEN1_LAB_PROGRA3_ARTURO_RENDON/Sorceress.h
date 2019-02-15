#ifndef SORCERESS_H
#define SORCERESS_H

#include "Character.h"

class Sorceress:public Character
{
public:
	Sorceress();

	void special(Character*) override;

};

#endif // !SORCERESS_H