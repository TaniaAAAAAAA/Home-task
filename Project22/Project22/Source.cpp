#include<iostream>
#include<ctime>

using namespace std;
int main()
{
	srand(unsigned(time(NULL)));

	//1. Дано одновимірний масив. Знайти найбільший та найменший елементи масиву та поміняти їх у масиві місцями

  /*
  int cool[6];
  int max = 0, min = 0;
  for (int i = 0; i < 6; i++)
  {
	  cool[i] = rand() % 30 + -12;
	  cout << " Cool [ " << i << " ] = " << cool[i] << endl;
  }


  max = cool[0];
  min = cool[0];
  for (int i = 0; i < 6; i++)
  {

	  if(cool[i]>max)
	  {
		  max = cool[i];
	  }
	  if (cool[i] < min)
	  {
		  min = cool[i];
	  }
  }

  cout << "------------------------------->>" << endl;
  cout << " max = " << max << endl << " min = " << min << endl;
  cout << "------------------------------->>" << endl;
  cout << " Zminenuy masuv:\n\n";
  for (int i = 0; i < 6; i++)
  {

	  if(cool[i]==max)
	  {
		  cool[i] = min;
	  }
	  else if (cool[i] == min)
	  {
		  cool[i] = max;
	  }


	  cout << " Cool [ " << i << " ] = " << cool[i] << endl;
  }

*/









//2. Дано одновимірний масив. Знайти суму елементів з непарними індексами. 

/*
	int one[7];
	int Sum = 0;


	for (int i = 0; i < 7; i++)
	{
		one[i] = rand() % 30 + -12;
		cout << " One [ " << i << " ] = " << one[i] << endl;
	}

	cout << "------------------------------->>" << endl;

	for (int i = 0; i < 7; i++)
	{

		if (i % 2 != 0)
		{
			Sum += one[i];
		}
	}

	cout << "------------------------------->>" << endl;
	cout << " Suma elementiv z neparnumu indexamu = " << Sum << endl;
*/



// 3. Дано одновимірний масив. Поміняти місцями перший елемент з другим, третій з четвертим, і т.д. Вивести змінений масив на екран. 



	int three[7], n;

	for (int i = 1; i < 7; i++)
	{
		three[i] = rand() % 30 + -12;
		cout << " Three [ " << i << " ] = " << three[i] << endl;
	}

	cout << "------------------------------->>" << endl;
	cout << " Zminenuy masuv : "<<endl;

	for (int i = 1; i < 7; i+=2)
	{
		n = three[i];
		three[i] = three[i+1];
		three[i+1] = n;

	}
	
		for (int i = 1; i < 7; i++)
		{
		cout << " Three 2 [ " << i << " ] = " << three[i] << endl;
	
        }
	


	system("pause");
	return 0;
}