#ifndef CHARACTER_H
#define CHARACTER_H

class Character
{
public:
	Character();
	
	//Atributos de characters a heredar a las otras clases
	int strength;
	int magic;
	int def;
	int magicDef;
	int hp;

	//Metodos
	void attack(Character*);
	void cast(Character*);

	virtual void special(Character*);

	bool operator <(Character);
	bool operator >(Character);

};

#endif // !CHARACTER_H