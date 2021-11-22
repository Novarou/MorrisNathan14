#ifndef Car_C_
#define Car_C_

#include "Vehicle_C.h"

class Car_C : public Vehicle_C
{
private:
	int doors;

public :
	Car_C();
	Car_C(int);
	Car_C(int, string, string);
	int Get_Doors()const;
	void Set_Doors(int);

	virtual void Display_Data() const;
};

#endif // !Car_C_
