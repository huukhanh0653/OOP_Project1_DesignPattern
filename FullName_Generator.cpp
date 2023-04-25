#include "FullName_Generator.h"

NameGenerator::NameGenerator()
{
	srand(unsigned(time(NULL)));
}

Fullname NameGenerator::next()
{
	string last_name[10] = { "Le","Trieu","Dinh","Ly","Tran","Nguyen","Vu","Do","Lam","Hoang" };
	string first_name[10] = { "Khanh","Oanh","Thao","Binh","An","Ngan","Truong","Anh","Khiem","Nguyen" };
	string middle_name[10] = { "Thanh", "Nhu","Ngoc","Van","Thi","Hong","Nhat","Cong","Quynh","Tuyet" };

	string tmp[3];

	Fullname result;

	tmp[0] = last_name[rand() % 10];
	tmp[1] = "";
	for (int i = 0; i < rand() % 3; i++)
		tmp[1] += middle_name[rand() % 10];
	tmp[2] = first_name[rand() % 10];

	result.setName(tmp[0], tmp[1], tmp[2]);

	return result;
}