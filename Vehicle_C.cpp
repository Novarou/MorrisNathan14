#include "Car_C.h"

Vehicle_C::Vehicle_C()
{
	manufactor = "";
	dateBuilt = "";
}

Vehicle_C::Vehicle_C(string man, string DB)
{
	manufactor = man;
	dateBuilt = DB;
}

string Vehicle_C::Get_Manufactor() const
{
	return manufactor;
}

string Vehicle_C::Get_Date_Built() const
{
	return dateBuilt;
}

void Vehicle_C::Set_Manufactor(string man)
{
	manufactor = man;
}

void Vehicle_C::Set_Date_Built(string DB)
{
	dateBuilt = DB;
}

void Vehicle_C::Display_Data() const
{
	cout << "\nVehicle Information: ";
	cout << "\nManufacturer: " << Get_Manufactor();
	cout << "\nYear Built: " << Get_Date_Built();
}
