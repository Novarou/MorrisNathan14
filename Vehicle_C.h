#ifndef Vehicle_C_
#define Vehicle_C_


#include <string>
#include <iostream>

using namespace std;

class Vehicle_C
{
private:
	string manufactor, dateBuilt;

public:
	Vehicle_C();
	Vehicle_C(string, string);

	string Get_Manufactor() const;
	string Get_Date_Built() const;
	void Set_Manufactor(string);
	void Set_Date_Built(string);

	virtual void Display_Data() const;
};
#endif