/*#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
void main()
{*/



	/*
	int mas[6], min, max=0, i;

	for ( i = 0; i < 6; i++)
	{
		cout << "Enter mas   :    ";
		cin >> mas[i];                                                   //6.3
	}

	for (int i = 0; i < 5; i++)
	{
		if (mas[i] < mas[i - 1] && mas[i] < mas[i + 1])
		{

			cout << "            " << mas[i - 1] << "     and    " << mas[i] << "        and       " << mas[i + 1] << endl;
			min = mas[i];

			cout << "              min [ " << i << " ] =        " << min << endl;

		if (min>max)
		{
			max = min;

		}

	}

	}

	cout << "            max =         " << max << endl;

		*/







		/*




		int mas[6];
		int i;
		char m = ' . ';


		for (i = 0; i < 6; i++)
		{
			cout << "Enter mas   :    ";
			cin >> mas[i];
		}


		for (i = 0; i < 6; i++)
		{

			//cout << "           " << mas[i];
			if (mas[i] == 0)
			{
				mas[i] = m;
				cout << m;
			}

			cout << "           " << mas[i];


		}



			for (i = 0; i < 6; i++)

			{


			if (mas[i] % 2 == 0)
			{
				cout << "                   mas[i - 1] + 2 =  " << mas[i - 1] + 2<<endl;
				break;
			}



			}*/








#include<iostream>                      //класи
using namespace std;
void main()
	{
		class complex chislo; 
		chislo.x = 1; 
		chislo.y = 1; 
		
		chislo.show_complex();
	
		cout << "       "  << chislo.modul() << endl;
		cout << "          " << chislo.argument() << endl;
	
	






	system("pause");
	//return 0;
    }