#pragma once
#include <iostream>

using namespace std;

class Ship
{
private:
	int numPirates;
	int numParrots = 0;
	int numRon = 0;
	int numHidromiel = 0;
	int numGine = 0;
	int minPirates = 20;
	int maxPirates = 40;
	int initialGold = 200;
	int numOfFortress = 0;
	

public:

	Ship();
	~Ship();

	void SnumPirates(int numPirates);
	void SnumParrots(int numParrots);
	void SnumRon(int numRon);
	void SnumHidromiel(int numHidromiel);
	void SnumGine(int numGine);
	void SminPirates(int minPirates);
	void sMaxPirates(int maxPirates);
	void sInitalGold(int initialGold);
	void dNumOfFortress(int numOfFortress);
	
	void attackFortress(int typeOfFortress);
	void GetStatistics();
	void loot();
	int GetNumberOfPirates();
	bool isGameOver();
};

