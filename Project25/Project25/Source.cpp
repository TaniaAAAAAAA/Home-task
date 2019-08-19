#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	srand(unsigned(time(NULL)));
	const int SIZE = 10;
	int mas[SIZE][SIZE];

	for(int i = 0; i < SIZE; i++)
	{
		for(int j = 0; j < SIZE; j++)
		{
			mas[i][j] = rand() % 50 + 1;
		}

	}



	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout<<"mas ["<<i<<"]["<<j<<"] = "<<mas[i][j]<<endl;
		}
		cout << "\n";
	}
	cout << "==========================>>\n";

	int min = mas[0][0];
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (mas[i][j] <min)
			{
				min = mas[ i ][ j ];
				
	    	}
			
		}
		
	}
	cout << "    min = " << min<<endl;
	cout << "==========================>>\n";

	int tmp = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (min=mas[i][j])
			{
				tmp = mas[0][0];
				mas[0][0] = mas[i][j];
				mas[i][j] = tmp;

			}

		}

	}

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << "mas [" << i << "][" << j << "] = " << mas[i][j] << endl;
		}
		cout << "\n";
	}
	cout << "==========================>>\n";

	system("pause");
	return 0;
}