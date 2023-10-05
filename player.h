#pragma once
#include <iostream>
class player
{
private:
	int health{};
	int armor{};
	int speed{};
	long int points{};
	std::string currentWeapon;
	std::string secondaryWeapon;

public:
	player();

	void setHealth(int value);
	int getHealth();

	void setArmor(int value);
	int getArmor();

	void setSpeed(int value);
	int getSpeed();

	void updatePoints(int value);
	long int getPoints();

	void setPrimaryWeapon(std::string& weapon);
	std::string& getPrimaryWeapon();

	void setSecondaryWeapon(std::string& weapon);
	std::string& getSecondaryWeapon();

	void killZombie();
	void hitZombie();



};

