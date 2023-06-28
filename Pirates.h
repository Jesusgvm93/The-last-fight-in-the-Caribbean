#pragma once
#include <iostream>

using namespace std;

class Pirates
{
private:
	int damage; // = 10.0f;
	bool parrot; // = 20 % +5.0f;
	string liqueur;

public:
	//constructor
	Pirates();
	//destructor
	~Pirates();
	//setters
	void setDamage(int damage);
	void typeLiqueur(string liqueur);
	//getters
	int getDamage();
	bool getParrot();
	string getLiqueur();
	//metodos
};


