#include "Truck_C.h"

Truck_C::Truck_C()
{
}

Truck_C::Truck_C(int)
{
}

Truck_C::Truck_C(int, int, string, string)
{
}

int Truck_C::Get__Tow_Cap() const
{
	return 0;
}

void Truck_C::Set_Tow_Cap(int)
{
}

void Truck_C::Display_Data() const
{
	cout << "Truck Information: \n";
	cout << "Manufacturer: " << Get_Manufactor();
	cout << "Year Built: " << Get_Date_Built();
	cout << "Towing Capacity: " << Get__Tow_Cap();
}
