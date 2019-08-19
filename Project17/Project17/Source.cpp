#include<iostream>

using namespace std;
int main()
{
const int parol = 123;
int parol_ved, i, number, suma, n;
char text[20];

cout << "Enter your parol : ";
cin >> parol_ved;
if (parol_ved == parol)
{

	cout << "Popovnit rahynok-1\nDzvonit-2\nVidpravlatu SMS-3\nZablokyvatu-4\n";
	cout << "Enter nomer dii aky bajaete vukonatu : ";
	cin >> i;

	if (i == 1)
	{
		cout << "Enter nomer telephony akui want popovnutu : ";
		cin >> number;
		cout << "Enter sumy popovnena : ";
		cin >> suma;
		cout << "For prodovjena press 5, for exit any key" << endl;
		cin >> n;
		if (n == 5)
		{
			cout << "Vitaemo! Rahynuk popovneno\n";
		}
		else
		{
			return 0;
		}
	}

	if (i == 2)
	{
		cout << "Enter nomer telephony : ";
		cin >> number;
		cout << "Pres 6 shob dzvonutu, for exit any key \n";
		cin >> n;
		if (n == 6)
		{
			cout << "Ide dzvinok\n";
		}
		else
		{
			return 0;
		}
	}

	if (i == 3)
	{

		cout << "Enter nomer otrumyvacha SMS : ";
		cin >> number;
		cout << "Enter text SMS :\n";
		cin >> text;
		cout << "For vidpravlenia press 7, for exit any key :";

		cin >> n;
		if (n == 7)
		{
			cout << "VIDPRAVLENO!\n";
		}
		else
		{
			return 0;
		}
	}


	if (i == 4)
	{
		return 0;
	}



}
else
{
	cout << "Nevirnuy parol\nTry again\n";
}




system("pause");
return 0;
}