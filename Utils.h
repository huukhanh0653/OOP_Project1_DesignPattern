#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;

namespace Utils
{
	static const int maxDayOfMonths[13] = { -1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	class String
	{
	public:
		static vector<string> split(string, string);
	};
}

class Date
{
private:
	int _day, _month, _year;
public:
	Date();
	Date(int, int, int);
	static bool isLeapYear(int);
	bool isValidDate();
	static Date now();
	void operator=(Date);
	string to_String();
};