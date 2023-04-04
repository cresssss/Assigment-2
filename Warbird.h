#ifndef WARBIRD_H
#define WARBIRD_H

#include "PropulsionSystem.h"
#include "PayloadSystem.h"
#include "WeaponSystem.h"

#include <iostream>

class Warbird
{
private:
    PropulsionSystem *propulsionSystem1;
    PropulsionSystem *propulsionSystem2;
    PayloadSystem *payloadSystem;
    WeaponSystem *weaponSystem1;
    WeaponSystem *weaponSystem2;
    int speed;            // speed of travel in meters per second
    int distanceTraveled; // distance traveled in meters

public:
    Warbird();

    Warbird(PropulsionSystem *ps1, PropulsionSystem *ps2, PayloadSystem *ps, WeaponSystem *ws1, WeaponSystem *ws2, int s)
        : propulsionSystem1(ps1), propulsionSystem2(ps2), payloadSystem(ps), weaponSystem1(ws1), weaponSystem2(ws2), speed(s), distanceTraveled(0) {}

    int getSpeed() { return speed; }
    int getDistanceTraveled() { return distanceTraveled; }

    int setSpeed(int s) { speed = s; }
    int setDistanceTraveled(int d) { distanceTraveled = d; }
};

#endif // WARBIRD_H
