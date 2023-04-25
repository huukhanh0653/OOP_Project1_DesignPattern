#pragma once
#include <iostream>
#include <string>
#include "Student_Data.h"
#include "StudentData_Generator.h"

using namespace std;
using namespace Utils;

int main()
{
	StudentGenerator a;
	Student b;
	for (int i = 0; i < 30; i++)
	{
		b = a.next();
		cout << b.
	}
	return 0;
}