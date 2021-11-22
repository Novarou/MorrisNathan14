/*
Nathan Morris
cis 12 ---
11/22/21
*/

#include "Truck_C.h"

void Display_Data(Vehicle_C& vehicleObj);

int main()
{
	string man, yrBuilt;
	int numDoor, tCap;

	Vehicle_C v1;
	Truck_C t1;
	Car_C c1;

	cout << "Enter Manufactorer for the first Vehicle: ";
	getline(cin, man);
	v1.Set_Manufactor(man);
	cout << "Enter Year Built for the first Vehicle: ";
	cin >> yrBuilt;
	v1.Set_Date_Built(yrBuilt);

	cout << "Enter Manufactorer for the Second Vehicle:";
	cin.ignore();
	getline(cin, man);
	c1.Set_Manufactor(man);

	cout << "Enter Year Built for the Second Vehicle: ";
	cin >> yrBuilt;
	c1.Set_Date_Built(yrBuilt);

	cout << "Enter The number of Doors for the Second Vehicle: ";
	cin >> numDoor;
	c1.Set_Doors(numDoor);

	cout << "Enter Manufactorer for the Third Vehicle:";
	cin.ignore();
	getline(cin, man);
	t1.Set_Manufactor(man);

	cout << "Enter Year Built for the Third Vehicle: ";
	cin >> yrBuilt;
	t1.Set_Date_Built(yrBuilt);

	cout << "Enter The towing capacity for the Third Vehicle: ";
	cin >> numDoor;
	t1.Set_Tow_Cap(tCap);

	Display_Data(v1);
	Display_Data(c1);
	Display_Data(t1);

	cout << endl << endl;
	system("pause");
	return 0;
}

void Display_Data(Vehicle_C &vehicleObj)
{
	vehicleObj.Display_Data();
}














