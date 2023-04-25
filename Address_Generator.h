#pragma once
#include "Student_Data.h"
#include "Utils.h"

using namespace std;
using namespace Utils;

class AddressGenerator
{
public:
	AddressGenerator();
	static Address next();
};



