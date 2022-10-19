// personalProfile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//declaration of variables
	int id, age, iq;//multiple declared variables of whole numbers
	double phoneNumb;//data type similar to float but allows for longer numbers
	string firstName, lstName, mddlName, address;//data type which gives words
	char gender;//accepts only a single byte
	float height;//can accept decimal point
	string bloodtype, mainHobby, carOwned, birthStone, hairColour, eyeColour;

	//initializaiton of variables
	phoneNumb = 2544445555;
	age = 38;
	id = 3;
	firstName = "Edward";
	lstName= "Meliod";
	mddlName = "Neutron";
	address = "45 Jimmy St.";
	gender = 'm';
	height = 4.5;
	bloodtype = "O";
	mainHobby = "surfing";
	carOwned = "Mitsubishi";
	birthStone = "Opal Tourmaline";
	hairColour = "brunette";
	eyeColour = "black";
	iq = 100;

	//display of initialized variables
	cout << "*******PROFILE*******\n\n";
	cout << "ID\t" << id;
	cout << "\nFirst Name\t" << firstName<< "\nLast Name\t" << lstName<< "\nMiddle Name\t" << mddlName<< "\nAge\t"<< age;
	cout << "\nGender\t" << gender << "\nHeight\t" << height << "\nBlood Type\t" << bloodtype;
	cout << "\nHair Colour\t" << hairColour <<"\nEye Colour\t"<< eyeColour<<"\nBirth Stone\t" << birthStone;
	cout << "\nPhone Number\t" << phoneNumb << "\nPhysical Address\t" << address;
	cout << "\nIQ\t" << iq<< "\nHobby\t"<< mainHobby << "\nCar\t" << carOwned;







	
}

