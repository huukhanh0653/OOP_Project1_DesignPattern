#pragma once
#include "Date_Generator.h"

DateGenerator::DateGenerator()
{
	srand(unsigned(time(NULL)));
}

Date DateGenerator::next()
{
	int _year = rand() % 122 + 1900;
	int _month = rand() % 13;
	int _day;
	if (Date::isLeapYear(_year) && _month == 2) _day = rand() % (maxDayOfMonths[_month] + 1);
	else _day = rand() % maxDayOfMonths[_month];
	return Date(_day, _month, _year);
}