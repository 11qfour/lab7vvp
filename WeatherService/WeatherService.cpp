#include <iostream>
#include "Service.h"
#include "JsonService.h"
#include "Weather.h"
#include "XmlService.h"

int main()
{
    /*JsonService js;
    Weather w = js.getWeather("weather.json");*/

    XmlService xs;
    Weather x = xs.getWeather("weather.xml");

}
