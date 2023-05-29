#pragma once
#include <string>
#include <iostream>
#include "Service.h"
#include <fstream>
#include "Weather.h"

using namespace std;

class JsonService : public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};

