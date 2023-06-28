#include "Pirates.h"
using namespace std;

Pirates::Pirates()
{
	//cout << "Piratas:: Pirates()" << endl;
	parrot = (rand() % 100) < 20;
	damage = 10.0f;
	//cout << parrot << endl;
	if (parrot == 1)
	{
		damage += 5.0f;
	}
	else
	{
		damage;
	}

	int num = rand() % 100;
	//cout << num << endl;
	
	if (num < 15)
	{
		liqueur = "ron";
		damage += 5.0f;
	}

	else if (num < 40)
	{
		liqueur = "hidromiel";
		damage += 2.0f;
	}
		
	else
	{
		liqueur = "gin";
		damage += 1.0f;
	}

	//cout << liqueur << endl;
	//cout << damage << endl;

	
}

void Pirates::setDamage(int damage)
{
	this->damage = damage;

}

void Pirates::typeLiqueur(string liqueur)
{
	this->liqueur = liqueur;
}

Pirates::~Pirates()
{
	//cout << "Pirata :: ~Pirates(...)" << endl;
}

int Pirates::getDamage()
{
	return damage;
}

string Pirates::getLiqueur()
{
	return liqueur;
}

bool Pirates::getParrot()
{
	return parrot;
}













