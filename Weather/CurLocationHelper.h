#pragma once
#include <string>
#include "CityCode.h"

class CCurLocationHelper
{
public:
    CCurLocationHelper();
    ~CCurLocationHelper();

    struct Location
    {
        std::wstring province;
        std::wstring city;
        std::wstring conty;
    };

    static std::wstring GetCurrentCity();
    //���ַ����е�xxʡxx��xx��/�в��
    static Location ParseCityName(std::wstring city_string);
    static CityCodeItem FindCityCodeItem(Location location);
    static CityCodeItem FindCityCodeItem(std::wstring city_name);

};

