#ifndef PRIEST_H
#define PRIEST_H

#include "Character.h"
class Priest :public Character
{
public:
	Priest();

	void special(Character*) override;
};

#endif // !PRIEST_H