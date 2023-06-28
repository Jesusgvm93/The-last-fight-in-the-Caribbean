#include "Ship.h"
#include "Pirates.h"

using namespace std;

Ship::Ship()
{
	cout << "Barco Pirata :: Ship()" << endl;
	numPirates = rand() % (maxPirates - minPirates + 1) + minPirates;
	//cout << numPirates << endl;
	
	//Generación de piratas y contador de Loros y licores
	for (int i = 0; i < numPirates; i ++)
	{
		Pirates pirate;
		
		if (pirate.getParrot() == 1)
		{
			numParrots ++;
		}

		string liquers = pirate.getLiqueur();

		if (liquers == "ron")
		{
			numRon++;
		}
		else if (liquers == "hidromiel")
		{
			numHidromiel++;
		}
		else
		{
			numGine++;
		}

	}

}

Ship::~Ship()
{

}

void Ship::SnumPirates(int numPirates)
{
	this->numPirates = numPirates;
}

void Ship::SnumParrots(int numParrots)
{
	this->numParrots = numParrots;
}

void Ship::SnumRon(int numRon)
{
	this->numRon = numRon;
}

void Ship::SnumHidromiel(int numHidromiel)
{
	this->numHidromiel = numHidromiel;
}

void Ship::SnumGine(int numGine)
{
	this->numGine = numGine;
}

void Ship::SminPirates(int minPirates)
{
	this->minPirates = minPirates;
}

void Ship::sMaxPirates(int maxPirates)
{
	this->maxPirates = maxPirates;
}

void Ship::sInitalGold(int initialGold)
{
	this->initialGold = initialGold;
}

void Ship::dNumOfFortress(int numOfFortress)
{
	this->numOfFortress = numOfFortress;
}

void Ship::attackFortress(int typeOfFortress)
{
	int fortressStrength;
	int fortressGold;

	if (typeOfFortress == 1) {
		fortressStrength = 50;
	}
	else if (typeOfFortress == 2) {
		fortressStrength = 100;
	}
	else {
		fortressStrength = 200;
	}

	fortressGold = 5 * fortressStrength;

	int fortressDamage = fortressStrength / 2;
	int shipDamage = fortressDamage;
	if (shipDamage > fortressDamage) {
		shipDamage = numPirates;
	}

	numPirates -= shipDamage;
	initialGold += fortressGold;

	cout << "¡Has atacado la fortaleza y causado " << shipDamage << " de daño!" << endl;
	cout << "Has saqueado " << fortressGold << " de oro." << endl;

	if (numPirates <= 0) {
		cout << "¡Tu tripulacion ha sido derrotada! Game Over." << endl;
		cout << "Gracias por jugar." << endl;
		exit(0);
	}
}

void Ship::GetStatistics()
{
	cout << "Piratas en el barco: " << numPirates << endl;
	cout << "Cantidad de loros: " << numParrots << endl;
	cout << "Cantidad de alcohol (Ron/Hidromiel/Gin): " << numRon << "/" << numHidromiel << "/" << numGine << endl;
	cout << "Oro: " << initialGold << endl;
}

void Ship::loot()
{
	initialGold -= 10;
	int newPirates = rand() % 9 + 2;  
	numPirates += newPirates;
	cout << "¡Has conseguido " << newPirates << " nuevos piratas!" << endl;
}

int Ship::GetNumberOfPirates()
{
	return numPirates;
}

bool Ship::isGameOver()
{
	return false;
}



