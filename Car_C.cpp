#include "Car_C.h"

Car_C::Car_C()
{
}

Car_C::Car_C(int)
{
}

Car_C::Car_C(int, string, string)
{
}

int Car_C::Get_Doors() const
{
	return 0;
}

void Car_C::Set_Doors(int)
{
}

void Car_C::Display_Data() const
{
	cout << "Car Information: \n";
	cout << "Manufacturer: " << Get_Manufactor();
	cout << "Year Built: " << Get_Date_Built();
	cout << "Number of Doors: " << Get_Doors();

}
