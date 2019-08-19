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

ABONENT *reg_users = NULL;

int n_reg_users = 0;

void SaveRegUsers();

bool ReadFile(ABONENT*& TELEFON, int &size);

ABONENT *AddStruct(ABONENT *Obj, int amount);

void setData(ABONENT *Obj, int amount);

void showData(const ABONENT *Obj, int amount);

void showDataPoint(const ABONENT* Obj, int size, string point);


//using namespace std;
int main()

{

	setlocale(LC_ALL, "");



	int size ;
	cin >> size;
	ABONENT temp;

	string point;

	ABONENT *TELEFON = 0;

	int sponsorAmount = 0;



	if (ReadFile(TELEFON, size))

		showData(TELEFON, size);

	else

		cout << "Error opening file!" << endl;







	ofstream fout("f2.bin", ios::binary);

	for (int i = 0; i < 8; i++)

		fout.write((char*)&TELEFON[i], sizeof(ABONENT));

	fout.close();

	cout << endl;

	cout << "?i?????? ????" << endl;

	ifstream fin("f2.bin", ios::binary);

	cout << "? " << "?????  " << " ????   " << "   ?????   " << " ???  " << endl;

	cout << "-------------------------------------------------------" << endl;

	for (int i(0); i < size; i++)

	{

		fin.seekg(i * sizeof(ABONENT), ios::beg);

		fin.read((char*)&temp, sizeof(ABONENT));

		cout << i + 1 << "  " << temp.Name << "\t  " << temp.Init << "\t" << temp.Nomer << "\t" << temp.Adress << endl;

	}

	int check = 0;

	cout << "????i?? ????? ??i????:";
    
	cin >> point;

	ofstream files;

	files.open("f3.txt");

	cout << "? " << "?????  " << " ????   " << "   ?????   " << " ???  " << endl;

	cout << "-------------------------------------------------------" << endl;

	for (int i(0); i < size; i++)

	{

		fin.seekg(i * sizeof(ABONENT), ios::beg);

		fin.read((char*)&temp, sizeof(ABONENT));

		if (temp.Nomer == point)

		{

			check++;

			cout << i + 1 << "  " << temp.Name << "\t  " << temp.Init << "\t" << temp.Nomer << "\t" << temp.Adress << endl;

			files << temp.Name << "\n" << temp.Init << "\n" << temp.Nomer << "\n" << temp.Adress << "\n";

		}



	}

	if (check < 1)

	{

		cout << "??i??? ?i?????i?" << endl;

	}

	files.close();



	cin.get();

	return 0;

}





void showData(const ABONENT* Obj, int size)

{



	cout << "?  " << "??i?????  " << "I?i?i???  " << "????? ????????  " << "??????  " << endl;

	cout << "=====================================================" << endl;

	for (int i(0); i < size; i++)

	{

		cout << i + 1 << "  " << Obj[i].Name << "\t  " << Obj[i].Init << "\t" << Obj[i].Nomer << "\t" << Obj[i].Adress << endl;

	}

}



void setData(ABONENT* Obj, int amount)

{

	cin.get();

	cout << "??i????? ????????:";

	cin.getline(Obj[amount].Name, 20);

	cout << "I?i?i??? ????????:";

	cin.getline(Obj[amount].Init, 5);

	cout << "????? ????????:";

	cin.getline(Obj[amount].Nomer, 20);

	cout << "??????:";

	cin.getline(Obj[amount].Adress, 20);

	cout << endl;

}

bool ReadFile(ABONENT*& TELEFON, int &size)

{

	ifstream fin("f1.txt");

	if (!fin)

		return false;



	(fin >> size).get();



	TELEFON = new ABONENT[size];



	for (int i = 0; i < size; i++)

	{

		fin.getline(TELEFON[i].Name, 20);

		fin.getline(TELEFON[i].Init, 5);

		fin.getline(TELEFON[i].Nomer, 20);

		fin.getline(TELEFON[i].Adress, 20);

	}

	fin.close();

	return true;



}

void showDataPoint(const ABONENT* Obj, int size, string point)

{

	int check = 0;

	cout << "?  " << "??i?????  " << "I?i?i???  " << "????? ????????  " << "??????  " << endl;

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

		cout << "?????? ?i?????i?";

	}
	//return 0;
	//system("pause");

}

