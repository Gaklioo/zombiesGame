#include "weapon.h"

int weapon::getWeaponDamage(std::string& weapon) {
	for (it = weaponMap.begin(); it != weaponMap.end(); it++) {
		if (it->first == weapon) {
			return it->second;
		}
	}
}