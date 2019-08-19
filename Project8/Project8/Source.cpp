#include <iostream>

using namespace std;

int main() 




//                                                    ЗАВДАННЯ 1
{
/*	float temperatura=0;
	int day=0,suma_day=1;


	for (day = 1; day <= 7; day++)        //створюю цикл за допомогою змінної day
	{
		cout << "Enter temperatura za  " << day<<" day : ";  // записую в цикл виміри температури за кожен день
		cin >> temperatura;


		if (temperatura > 10)   // якщо температура > 10 заходим в цикл

		{
			cout << "===============================================" << endl;
			cout << "Temperatura > za 10 bula y    " << day << endl;    //виводжу номер дня коли темпеатура була > за 10
		    cout << "Suma day = " <<suma_day++<< endl;                // сумую дні, температура яких була більшою за 10
			cout << "===============================================" << endl;

		}
	}*/
	
	






	//                                               Завдання 2
	 


	int suma=0, suma2=0, max;
	char text[10];
	cout << "Enter symbols\n";


	for (int i = 1; i <= 10; i++)
	{
		cin >> text[i];
		if (text[i] == '.')
		{
			break;
		}

	}
		for (int i = 1; i <= 10; i++)
		{ 
		if (text[i] == 'a')
		{
			suma++;
			//cout << "Suma 'a' = " << suma << endl;
		}

		if (text[i] == 'o')
		{
			suma2++;
		//	cout << "Suma 'o' = " << suma2 << endl;

		}

	}
		cout << "Suma 'a' = " << suma << endl;
		cout << "Suma 'o' = " << suma2 << endl;
	max = suma2;
		if (suma > max)
		{
			max = suma;
			cout << "Maksumym sumboliv is 'a' = " << suma << endl;
		}
		else if (suma2 > suma)
		{
			max = suma2;
			cout << "Maksumym sumboliv is 'o' = " << suma2 << endl;
		}
		else
		{
			cout << "Suma 'a' and 'o' is rivni\n";
		}


	










//                                                    ЗАВДАННЯ 3


	/*
	int number = 0, i=1,dob=1;

	cout << "Enter number   ";
	cin >> number;                //ввожу число, табличку множення на яке, я хочу вивести на екран

	do
	{
		dob=number*i;                // виконує множення
		cout << number << " * " << i << " = " << dob <<  endl;         //  виводжу на екран табличку

	} while (i<10&&i++);                 // вказую умову за якої цикл має працювати. А саме і (множник на який множу введене з клавіатури число) має бути менший 10 і після кожного проходження циклу має збільшуватись на один.

	*/












//                                                        ЗАВДАННЯ 4                                  

	/*
	const int parol = 123;
	int parol_ved, i,number, suma,n;
	char text[20];
	
	cout << "Enter your parol : ";
	cin >> parol_ved;
	if (parol_ved == parol)
	{
		
		cout << "Popovnit rahynok-1\nDzvonit-2\nVidpravlatu SMS-3\nZablokyvatu-4\n";
		cout << "Enter nomer dii aky bajaete vukonatu : ";
		cin>> i;

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

	*/











	system("pause");
	return 0;
}