#include<iostream>
#include<ctime>

using namespace std;
int main()
{
	const int SIZE = 5;
	int mas[SIZE];
	int kil = 0;
	srand(unsigned(time(NULL)));
	for (int i = 0; i < SIZE; i++)
	{
		mas[i] = rand() % 33 + -10;
	}
	cout << "\n\n\n                         << --------------- masuv ---------------->>\n\n\n";

	for (int i = 0; i < SIZE; i++)
	{
		cout << "   mas [ " << i << " ] = " << mas[i] << "   ";
	}
	cout << "\n\n\n<<<<<=============== livo ===============\n\n\n";

	cout << "Enter kilkist pozucuy na aky want zmistutusm : ";
	cin >> kil;
	cout << "\n\n\n";
	for (int i = kil; i < SIZE; i++)
	{
		cout << "  mas [ " << i << "] = " << mas[i] << "    ";
	}

	for (int i = kil; i > 0; i--)
	{
		cout << "  mas [ " << i << "] = " << mas[kil - i] << "    ";
	}

	cout << "\n\n\n<<<=============== ==== ===============>>>\n\n\n";






	/*
		for (int i = kil; i < SIZE ; i++)
		{
			while (i == kil)
			{

				cout << "  mas [ " << i << "] = " << mas[i] << "    ";

			}
		}*/

		/*for (int i = kil; i <SIZE; i++)
		{
			cout << "  mas [ " << i << "] = " << mas[i+1] << "    ";
		}*/

	//for (int i = SIZE - 1; i > kil; i--)
	//{
	//	
	//	
	//	cout << "  mas [ " << i << "] = " << mas[i] << "    ";
	//
 //   }






	system("pause");
	return 0;
}