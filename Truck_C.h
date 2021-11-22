#ifndef Truck_C_
#define Truck_C_

#include "Car_C.h"

class Truck_C : public Vehicle_C
{
private:
	int towCap;

public:
	Truck_C();
	Truck_C(int);
	Truck_C(int, int, string, string);
	int Get__Tow_Cap()const;
	void Set_Tow_Cap(int);

	virtual void Display_Data() const;
};

#endif