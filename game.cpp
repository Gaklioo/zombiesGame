#include "game.h"
#include "player.h"
#include "zombies.h"
#include "mysteryMachine.h"
#include "weapon.h"

void printPlayerInfo(player* p) {
	int currentHealth = p->getHealth();
	int currentArmor = p->getArmor();
	int currentSpeed = p->getSpeed();
	int currentPoints = p->getPoints();
	std::string currentWeapon = p->getPrimaryWeapon();
	std::string currentSecondary = p->getSecondaryWeapon();
	std::string currentRealSecondary = (currentSecondary == "null") ? "no weapon" : currentSecondary;
	
	std::cout << "Your current Health Is: " << currentHealth << " Your current Armor is: " << currentArmor << " Your current Speed Is " << currentSpeed << " You have: " << currentPoints << " points." << std::endl;
	std::cout << "Your primary is a " << currentWeapon << " and your secondary is " << currentRealSecondary << std::endl;
}

void printZombieInfo(zombies* z) {
	int currentHealth = z->getHealth();
	int currentArmor = z->getArmor();
	int currentSpeed = z->getSpeed();
	int currentSpawnCount = z->getSpawnCount();
	int currentDamage = z->getDamage();


	std::cout << "There are " << currentSpawnCount << " Zombies alive, They each have " << currentHealth << " health, " << currentArmor << " armor, " << currentSpeed << " speed, and they do " << currentDamage << " damage to you" << std::endl;
}

void playGame(player* p, zombies* z, weapon* w, bool isPlaying) {
	while (isPlaying) {
		std::cout << "Welcome to my game, Here is your starting information" << std::endl;
		printPlayerInfo(p);
		std::cout << std::endl;
		printZombieInfo(z);
		std::cout << w->getWeaponDamage(p->getPrimaryWeapon());
		std::cin >> isPlaying;
	}

	delete p;
	delete z;
	delete w;

}

void initGame() {
	player* p = new player();
	zombies* z = new zombies();
	weapon* w = new weapon();
	bool isPlaying = true;
	playGame(p, z, w, isPlaying);
}
