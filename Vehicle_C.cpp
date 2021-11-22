#include "Car_C.h"

Vehicle_C::Vehicle_C()
{
}

Vehicle_C::Vehicle_C(string, string)
{
}

string Vehicle_C::Get_Manufactor() const
{
	return string();
}

string Vehicle_C::Get_Date_Built() const
{
	return string();
}

void Vehicle_C::Set_Manufactor(string)
{
}

void Vehicle_C::Set_Date_Built(string)
{
}

void Vehicle_C::Display_Data() const
{
	cout << "Vehicle Information: \n";
	cout << "Manufacturer: " << Get_Manufactor();
	cout << "Year Built: " << Get_Date_Built();
}
