#pragma once
#include <string>
#include <sstream>
#include <iostream>
#include <tuple>
#include <memory>

#include "Major.h"
#include "Utils.h"

using namespace Utils;
using namespace std;

class Fullname
{
public:
	Fullname();
	Fullname(string, string, string);
	vector<string> getName();
	void setName(string, string, string);
	string to_String();
	vector<string> split();
	void operator =(Fullname);

private:
	string _last, _middle, _first;
};

class Address
{
private:
	string _number;
	string _street, _ward, _district, _city;

public:
	Address();
	Address(string, string, string, string, string);
	vector<string> getAddress();
	void setAddress(string, string, string, string, string);
	string to_String();
	void operator =(Address);
};

class Student
{
private:
	Fullname _name;
	Address _address;
	string _tel;
	string _email;
	Date _DOB; // Date of Birth
	double _GPA;

public:
	Student();
	Student(Fullname, Address, string, string, Date, double);
	void setData(Fullname, Address, string, string, Date, double);
	void operator =(Student);
};
 