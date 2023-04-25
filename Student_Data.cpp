#pragma once
#include "Student_Data.h"

Fullname::Fullname()
{
	const string INIT = "";
	this->_first = INIT;
	this->_middle = INIT;
	this->_last = INIT;
}

Fullname::Fullname(string first, string middle, string last)
{
	this->_first = first;
	this->_middle = middle;
	this->_last = last;
}

void Fullname::setName(string first, string middle, string last)
{
	this->_first = first;
	this->_middle = middle;
	this->_last = last;
}

vector<string> Fullname::getName()
{
	return vector<string> {this->_last, this->_middle, this->_first};
}
string Fullname::to_String()
{
	stringstream result;
	result << this->_last << " " << this->_middle << " " << this->_first;
	return result.str();
}

vector<string> Fullname::split()
{
	vector<string> temp = this->getName();
	vector<string> result;
	for (int i = 0; i < temp.size(); i++)
	{
		vector<string> temp1 = Utils::String::split(temp[i]," ");
		for (int j = 0; j < temp1.size(); j++) result.push_back(temp1[j]);
	}
	return result;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Address::Address()
{
	this->_number = "0";
	this->_street = "";
	this->_ward = "";
	this->_district = "";
	this->_city = "";
}

Address::Address(string number, string street, string ward, string district, string city)
{
	this->_number = number;
	this->_street = number;
	this->_ward = ward;
	this->_district = district;
	this->_city = city;
}

string Address::to_String()
{
	stringstream result;
	result << this->_number << ", Duong " << this->_street << ", " << this->_ward
		<< ", " << this->_district << ", " << this->_city << ".";
	return result.str();
}

void Address::setAddress(string number, string street, string ward, string district, string city)
{
	this->_number = number;
	this->_street = number;
	this->_ward = ward;
	this->_district = district;
	this->_city = city;
}

vector<string> Address::getAddress()
{
	return vector<string> {this->_number, this->_street, this->_ward, this->_district, this->_city};
}

void Address::operator=(Address other)
{
	this->_number = other._number;
	this->_city = other._city;
	this->_district = other._district;
	this->_ward = other._ward;
	this->_street = other._street;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

void Fullname::operator=(Fullname other)
{
	this->setName(other._last, other._middle, other._first);
}

Student::Student()
{
	Address _address;
	Fullname _fullname;
	Date _date;

	this->_tel = "";
	this->_email = "";
	this->_name = _fullname;
	this->_DOB = _date;
	this->_GPA = 0;
}

Student::Student(Fullname name, Address address, string tel, string mail, Date dob, double gpa)
{
	this->_tel = tel;
	this->_email = mail;
	this->_name = name;
	this->_DOB = dob;
	this->_GPA = gpa;
	this->_address = address;
}

void Student::operator=(Student other)
{
	this->_tel = other._tel;
	this->_email = other._email;
	this->_name = other._name;
	this->_DOB = other._DOB;
	this->_GPA = other._GPA;
}

void Student::setData(Fullname name, Address add, string tel, string mail, Date dob, double gpa)
{
	this->_tel = tel;
	this->_email = mail;
	this->_name = name;
	this->_DOB = dob;
	this->_GPA = gpa;
	this->_address = add;
}