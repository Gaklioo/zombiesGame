#pragma once
#include <map>
#include <iostream>

const int maxWeapons = 5;

class weapon
{
private:
	int weaponDamage{};
	int weaponPrimaryAmmo{};
	int weaponPrimaryReserveAmmo{};
	int weponSecondaryAmmo{};
	int weaponSecondaryReserveAmmo{};
	
	std::string weapons[maxWeapons] = { "pistol", "m4", "scar", "minigun", "rocket launcher" };
	std::map<std::string, int> weaponMap;
	std::map<std::string, int>::iterator it;
public:
	weapon() {
		int weaponDamage[maxWeapons] = { 10, 20, 25, 30, 90 };
		
		for (int i = 0; i < maxWeapons; i++) {
			weaponMap[weapons[i]] = weaponDamage[i];
		}
	}

	int getWeaponDamage(std::string& weapon);
};

