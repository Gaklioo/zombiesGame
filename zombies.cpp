#include "zombies.h"

struct baseZombie {
	const int health = 10;
	const int armor = 0;
	const int speed = .5;
	const int damage = 5;
	const int spawnCount = 3;
};

zombies::zombies() {
	baseZombie  z;
	this->armor = z.armor;
	this->health = z.health;
	this->spawnCount = z.spawnCount;
	this->speed = z.speed;
	this->damage = z.damage;
}

void zombies::setHealth(int value) {
	this->health = value;
}

int zombies::getHealth() {
	return health;
}

void zombies::setArmor(int value) {
	this->armor = value;
}

int zombies::getArmor() {
	return armor;
}

void zombies::setDamage(int value) {
	this->damage = value;
}

int zombies::getDamage() {
	return damage;
}

void zombies::setSpawnCount(int value) {
	this->spawnCount = value;
}

int zombies::getSpawnCount() {
	return spawnCount;
}

void zombies::setSpeed(int value) {
	this->speed = value;
}

int zombies::getSpeed() {
	return speed;
}

void bossZombie::setBossHealth() {
	int zombieHealth = zombies::getHealth();
	int bossHealth = zombieHealth * 10;
	this->health = bossHealth;
}
void bossZombie::setBossArmor() {
	int zombiesArmor = zombies::getArmor();
	int bossArmor = zombiesArmor * 10;
	this->armor = bossArmor;
}
void bossZombie::setBossDamage() {
	int zombieDamage = zombies::getDamage();
	int bossDamage = zombieDamage * 4;
	this->damage = bossDamage;
}
void bossZombie::setBossSpawnCount() {
	int zombieSpawnCount = zombies::getSpawnCount();
	int bossSpawnCount = zombieSpawnCount % 5;
	this->spawnCount = static_cast<int>(bossSpawnCount);
}
void bossZombie::setBossSpeed() {
	int zombieSpeed = zombies::getSpeed();
	int bossSpeed = zombieSpeed * 0.8;
	this->speed = bossSpeed;
}

int bossZombie::getBossHealth() {
	return health;
}
int bossZombie::getBossArmor() {
	return armor;
}
int bossZombie::getBossDamage() {
	return damage;
}
int bossZombie::getBossSpawnCount() {
	return spawnCount;
}
int bossZombie::getBossSpeed() {
	return speed;
}