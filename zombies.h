#pragma once
class zombies
{
private:
	int health{};
	int armor{};
	int damage{};
	int spawnCount{};
	int speed{};

public:
	zombies();

	void setHealth(int value);
	int getHealth();

	void setArmor(int value);
	int getArmor();

	void setDamage(int value);
	int getDamage();

	void setSpawnCount(int value);
	int getSpawnCount();

	void setSpeed(int value);
	int getSpeed();
};

class bossZombie : public zombies{
private:
	int health{};
	int armor{};
	int damage{};
	int spawnCount{};
	int speed{};

public:

	void setBossHealth();
	void setBossArmor();
	void setBossDamage();
	void setBossSpawnCount();
	void setBossSpeed();

	int getBossHealth();
	int getBossArmor();
	int getBossDamage();
	int getBossSpawnCount();
	int getBossSpeed();
};

