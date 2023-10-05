#include "player.h"

struct playerStart {
	const int startingHealth = 100;
	const int startingArmor = 0;
	const int startingSpeed = 1;
	long int startingPoints = 150;
	std::string startingWeapon = "pistol";
	std::string startingSecondary = "null";
};

player::player() {
	playerStart p;
	this->health = p.startingHealth;
	this->armor = p.startingArmor;
	this->speed = p.startingSpeed;
	this->currentWeapon = p.startingWeapon;
	this->secondaryWeapon = p.startingSecondary;
	this->points = p.startingPoints;
}

void player::updatePoints(int value) {
	this->points += value;
}

long int player::getPoints() {
	return points;
}

void player::setHealth(int value) {
	this->health = value;
}

int player::getHealth() {
	return player::health;
}

void player::setArmor(int value) {
	this->armor = value;
}

int player::getArmor() {
	return player::armor;
}

void player::setSpeed(int value) {
	this->speed = value;
}

int player::getSpeed() {
	return player::speed;
}

void player::setPrimaryWeapon(std::string& weapon) {
	this->currentWeapon = weapon;
}

std::string& player::getPrimaryWeapon() {
	return player::currentWeapon;
}

void player::setSecondaryWeapon(std::string& weapon) {
	this->secondaryWeapon = weapon;
}

std::string& player::getSecondaryWeapon() {
	return player::secondaryWeapon;
}

void player::killZombie() {
	player::updatePoints(100);
}

void player::hitZombie() {
	player::updatePoints(20);
}