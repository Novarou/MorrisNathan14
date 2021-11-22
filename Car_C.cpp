#include "Car_C.h"

Car_C::Car_C()
{
	doors = 0;
}

Car_C::Car_C(int dr) : Vehicle_C()
{
	doors = dr;
}

Car_C::Car_C(int dr, string man, string DB) : Vehicle_C(man,DB)
{
	doors = dr;
}

int Car_C::Get_Doors() const
{
	return doors;
}

void Car_C::Set_Doors(int dr)
{
	doors = dr;
}

void Car_C::Display_Data() const
{
	cout << "\n\nCar Information: ";
	cout << "\nManufacturer: " << Get_Manufactor();
	cout << "\nYear Built: " << Get_Date_Built();
	cout << "\nNumber of Doors: " << Get_Doors();

}
