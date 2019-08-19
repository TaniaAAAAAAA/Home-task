#include<iostream>
#include <cstring>
#include <clocale>
#include <conio.h>

using namespace std;

int main()
{

	float mas[5];
	

	for (int i = 0; i < 5; i++) {
		cout << "Enter mas[ " << i << "]= ";


		cin >> mas[i];


	}
	for (int i = 0; i < 5; i++) {


		//cout << "Mas [i] = " << mas[i] << endl;
		int mas[3];
		if (mas[3] == 0)
		{

			delete mas[3];
			

		}
		else {
			cout << "Mas ["<<i<<"] = " << mas[i] << endl;
		}
	}








	system("pause");
	return 0;
}