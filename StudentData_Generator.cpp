#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include "StudentData_Generator.h"
#include "Student_Data.h"

using namespace std;
using namespace Utils;


TelGenerator::TelGenerator()
{
	srand(time_t(unsigned(time(NULL))));
}

string TelGenerator::next()
{
	string _operator[12] = { "086", "096", "097", "098", "032", "033","034", "035", "036", "037", "038", "039" };
	string result = _operator[rand() % 12];
	for (int i = 0; i < 7; i++) result += to_string(rand() % 10);
	return result;
}

EmailGenerator::EmailGenerator()
{
	srand(unsigned(time(NULL)));
}

string EmailGenerator::next(Fullname name)
{
	string _domain[5] = { "gmail.com","outlook.com","yahoo.com","apple.com","amazon.com" };
	vector<string> _name = String::split(name.to_String(), " ");
	
	//Create an email look like nhkhanh9991@gmail.com
	return _name[1];
}

GPAGenerator::GPAGenerator()
{
	srand(time_t(unsigned(time(NULL))));
}

double GPAGenerator::next()
{
	double temp = double(rand() % 41) / 10;
	return temp * 10 / 10;
}

StudentGenerator::StudentGenerator()
{
	srand(unsigned(time(NULL)));
}

Student StudentGenerator::next()
{
	Student _result;
	Fullname _name = NameGenerator::next();
	Address _add = AddressGenerator::next();
	string _tel = TelGenerator::next();
	string _email = EmailGenerator::next(_name);
	Date _dob = DateGenerator::next();
	double _GPA = GPAGenerator::next();
	_result.setData(_name, _add, _tel, _email, _dob, _GPA);
	return _result;
}