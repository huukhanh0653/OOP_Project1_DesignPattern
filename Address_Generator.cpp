#pragma once
#include "Address_Generator.h"

AddressGenerator::AddressGenerator()
{
	srand(unsigned(time(NULL)));
}

Address AddressGenerator::next()
{
	const string FakeHCMCiTy = "TP.HCM";

	string FakeNumber[5] = {
		(to_string(rand() % 4000)), // So nha
		(to_string(rand() % 4000) + string("/") + to_string(rand() % 100)), // Hem
		(to_string(rand() % 4000) + string("BIS")),
		(to_string(rand() % 4000) + string("A")),
		(to_string(rand() % 4000) + string("B")) };

	string FakeStreet[15] =
	{
		"Ton Duc Thang", "Tran Xuan Soan", "Pham Hung", "Nguyen Van Cu", "Nguyen Thi Minh Khai",
		"Nguyen Trai", "Le Loi", "Le Lai", "Bach Dang", "Nguyen Tat Thanh", "Le Quang Dinh", "Truong Chinh",
		"Pham Van Dong", "Cach Mang Thang Tam", "Vo Van Kiet"
	};

	string FakeWard = string("Phuong ") + to_string(rand() % 16);

	string FakeDistrict[16] = { "TP. Thu Duc", "Quan 1", "Quan 2", "Quan 3", "Quan 4", "Quan 5", "Quan 7", "Quan 8", "Quan 10"
		"Quan 11", "Quan 12", "Quan Tan Binh", "Quan Tan Phu", "Quan Phu Nhuan", "Quan Go Vap", "Quan Binh Thanh"
	};

	Address FakeAddress;
	FakeAddress.setAddress(FakeNumber[rand() % 5], FakeStreet[rand() % 15], FakeWard, FakeDistrict[rand() % 16], FakeHCMCiTy);

	return FakeAddress;
}
