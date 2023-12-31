#pragma once
#include <cmath>
#include <vector>
#include <string>

#include "Vector.h"
#include "Number.h"

struct Planet
{
    number mass;
    number x, y;
    number speed_x, speed_y;
    number accel_x, accel_y;
    number density;
    std::string name;

    Planet() :
        mass{},
        x{},
        y{},
        speed_x{},
        speed_y{},
        accel_x{},
        accel_y{},
        name{},
        density{}
    {
    };
    Planet(std::string name, number mass, number density, number x, number y, number speed_x, number speed_y, number accel_x, number accel_y):
		mass(mass),
        x(x),
        y(y),
        speed_x(speed_x),
        speed_y(speed_y),
        accel_x(accel_x),
        accel_y(accel_y),
		name(name),
		density(density)
    {}
    Vector GetPositionV() const { return { x,y }; };
    Vector GetSpeedV() const { return { speed_x,speed_y }; };
    Vector GetAccelV() const { return { accel_x,accel_y }; };
    number GetRadius() const { return pow(3.0 * (mass / density) / 4.0 / 3.14, (number)1/3); };
};
