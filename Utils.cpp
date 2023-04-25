#pragma once

#include "Utils.h"

vector<string> Utils::String::split(string _source, string needle)
{
	vector<string> result;
	string make_copy = _source;

	while (make_copy != "")
	{
		if (make_copy.find_first_of(needle) < 0 || make_copy.find_first_of(needle) > make_copy.length())
		{
			result.push_back(make_copy);
			return result;
		}

		else
		{
			string tmp = make_copy.substr(0, make_copy.find_first_of(needle));
			result.push_back(tmp);
			make_copy.erase(0, make_copy.find_first_of(needle) + 1);
		}
	}
	return result;
}

Date::Date()
{
	time_t info = unsigned(time(NULL));
	tm now;
	localtime_s(&now, &info);
	_year = now.tm_year + 1900;
	_month = now.tm_mon + 1;
	_day = now.tm_mday;
}

Date::Date(int day, int month, int year)
{
	this->_day = day;
	this->_month = month;
	this->_year = year;
}

Date Date::now()
{
	return Date();
}

void Date::operator=(Date other)
{
	this->_day = other._day;
	this->_month = other._month;
	this->_year = other._year;
}

bool Date::isLeapYear(int year)
{
	return (year % 400 == 0 ? true : false);
}

bool Date::isValidDate()
{
	if (isLeapYear(this->_year))
	{
		if (this->_month == 2 && this->_day > 0 && this->_day < 30)
			return true;
	}
	else
	{
		if (this->_month > 0 && this->_month < 13 && this->_day > 0 && this->_day <= Utils::maxDayOfMonths[this->_month])
			return true;
		else return false;
	}
	return true;
}
string Date::to_String()
{
	stringstream result;
	result << this->_day << "/" << this->_month << "/" << this->_year;
	return result.str();
}