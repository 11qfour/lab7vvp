#pragma once
#include <string>
#include <iostream>
#include "Weather.h"

class Service
{
public:
	virtual Weather getWeather(std::string s) = 0;
	virtual ~Service() {};
};

