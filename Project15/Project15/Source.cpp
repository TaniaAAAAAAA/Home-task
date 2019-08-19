
                   
#include<iostream>
#include<fstream>
using namespace std;
struct Choco
{
	char name[25];
	int kil;                            //  10.2
	float vidsot;
};
int main()
{
	ofstream File("chocolate.txt");

	Choco mas[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter name            :  ";
		cin >> mas[i].name;
		cout << "Enter vidsotok kakao  :  ";
		cin >> mas[i].vidsot;
		cout << "Enter kilkist za day    :   ";
		cin >> mas[i].kil;
		cout << "\n";
		File << mas[i].name << endl;
		File << mas[i].vidsot << endl;
		File << mas[i].kil;
	}

	File.close();


	ifstream File2("chocolate.txt");
	//while (!File2.eof())
	//{{

	int Suma = 0 ,kil=0;
	float ser;
	for (int i = 0; i < 3; i++)
	{

		File2 >> mas[i].name >> mas[i].vidsot >> mas[i].kil;

		cout << "=================================\n";
		cout << mas[i].name << endl;
		cout << mas[i].vidsot << endl;
		cout << mas[i].kil << endl;

		      Suma +=  mas[i].kil;
	


			  if (mas [i].name  == mas[i + 1].name)
			  {
				  kil++;
				  
			  }
	}
	
	cout << "SER =    " << Suma/3 << endl;
	cout << " Love  =    " << kil++ << endl;

	
	






	File2.close();
	system("pause");
	return 0;
}