#include "Truck_C.h"

Truck_C::Truck_C()
{
	towCap = 0;
}

Truck_C::Truck_C(int TC) : Vehicle_C()
{
	towCap = TC;
}

Truck_C::Truck_C(int TC, int DR, string man, string DB)
{
	towCap = TC;
}

int Truck_C::Get__Tow_Cap() const
{
	return towCap;
}

void Truck_C::Set_Tow_Cap(int TC)
{
	towCap = TC;
}

void Truck_C::Display_Data() const
{
	cout << "\n\nTruck Information: ";
	cout << "\nManufacturer: " << Get_Manufactor();
	cout << "\nYear Built: " << Get_Date_Built();
	cout << "\nTowing Capacity: " << Get__Tow_Cap();
}
