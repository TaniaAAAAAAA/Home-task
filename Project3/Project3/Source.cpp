#include <iostream>

#include <fstream>

#include <clocale>

#include <conio.h>

#include <string>
using namespace std;




struct ABONENT

{

	char Name[20];

	char Init[5];

	char Nomer[20];

	char Adress[20];

};

ABONENT* AddStruct(ABONENT* Obj, int amount);

void setData(ABONENT* Obj, int amount);

void showData(const ABONENT* Obj, int amount);

void showDataPoint(const ABONENT* Obj, int size, string point);



int main()

{

	setlocale(LC_ALL, "");



	int size;

	cout << "Enter kilkist:";

	cin >> size;

	ABONENT temp;

	string point;

	ABONENT *TELEFON = 0;

	int sponsorAmount = 0;



	for (int i(0); i < size; i++)

	{

		TELEFON = AddStruct(TELEFON, i);

		setData(TELEFON, i);

	}



	showData(TELEFON, size);





	showData(TELEFON, size);

	cout << "Enter Nomer:";

	cin >> point;

	showDataPoint(TELEFON, size, point);

	cin.get();

	return 0;

}

ABONENT* AddStruct(ABONENT* Obj, int amount)

{

	if (amount == 0)

	{

		Obj = new  ABONENT[amount + 1]; // âûäåëåíèå ïàìÿòè äëÿ ïåðâîé ñòðóêòóðû

	}

	else

	{

		ABONENT* tempObj = new  ABONENT[amount + 1];



		for (int i = 0; i < amount; i++)

		{

			tempObj[i] = Obj[i]; // êîïèðóåì âî âðåìåííûé îáúåêò

		}

		delete[] Obj;



		Obj = tempObj;

	}

	return Obj;

}



void showData(const ABONENT* Obj, int size)

{

	system("cls");

	cout << "#  " << "Name  " << "Init  " << "Nomer  " << "Adress  " << endl;

	cout << "=====================================================" << endl;

	for (int i(0); i < size; i++)

	{

		cout << i + 1 << "  " << Obj[i].Name << "\t  " << Obj[i].Init << "\t" << Obj[i].Nomer << "\t" << Obj[i].Adress << endl;

	}

}



void setData(ABONENT* Obj, int amount)

{

	cin.get();

	cout << "Enter Name:";

	cin.getline(Obj[amount].Name, 20);

	cout << "Enter Init:";

	cin.getline(Obj[amount].Init, 5);

	cout << "Enter Nomer:";

	cin.getline(Obj[amount].Nomer, 20);

	cout << "Adress:";

	cin.getline(Obj[amount].Adress, 20);

	cout << endl;

}



void showDataPoint(const ABONENT* Obj, int size, string point)

{

	int check = 0;

	cout << "#  " << "Name  " << "Init  " << "Nomer  " << "Adress  " << endl;

	cout << "=====================================================" << endl;

	for (int i(0); i < size; i++)

	{

		if (point == Obj[i].Nomer)

		{

			check++;

			cout << i + 1 << "  " << Obj[i].Name << "\t  " << Obj[i].Init << "\t" << Obj[i].Nomer << "\t" << Obj[i].Adress << endl;

		}

	}

	if (check == 0)

	{

		cout << "Êë³ºíò âiäñóòíié";
		system("pause");
	}
	system("pause");
}

