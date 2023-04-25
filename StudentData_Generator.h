#pragma once
#include "Student_Data.h"
#include "Date_Generator.h"
#include "FullName_Generator.h"
#include "Address_Generator.h"
#include "Major.h"
#include "Utils.h"

using namespace std;
using namespace Utils;

class TelGenerator
{
public:
	TelGenerator();
	static string next();
};

class EmailGenerator
{
	public:
	EmailGenerator();
	static string next(Fullname);
};

class GPAGenerator
{
public:
	GPAGenerator();
	static double next();
};

class StudentGenerator
{
public:
	StudentGenerator();
	static Student next();
};