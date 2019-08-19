/*#include<iostream>
using namespace std;
int main()
{



//{


	int main(int A, int* *A) {
		
		
	//int n;
	int A[5];


	for (int i = 0; i < 5; i++)
	{
		cin >> A[i];
		cout << "                            " << A[i] << endl;
	
		if (A[i] == 0)
		{
			delete A [i];
	}
	
	
	
	}

#include <iostream>
#include <cstring>
#include <clocale>
#include <conio.h>



using namespace std;
//int main(int argc, char** argv) {
//	setlocale(LC_ALL, "Russia");
int main()
{
	int N;
	cin >> N;
	int A[N];
	for (int i = 0; i < N; i++)
	{
		cout << "Заполните массив";
		cin >> A[i];
	}
	int b, c;
	cout << "Какое значение удалить из массива" << endl;
	cin >> b;
	for ( i = 0; i < N; i++)
	{
		if (A[i] == b)
		{
			c++;
		}
	}
	if (c > 2) delete A[i];
	//return 0;
}


	int a;
	cout << "Enter storony trukytnika : ";
	cin >> a;
	float h = (a / 2)*sqrt(3);
	cout << " h = " << h << endl;
	float S = (pow(a, 2) / 4)*sqrt(3);
	cout << " S = "<<S << endl;
	float r = (a * sqrt(3)) / 6;
	cout << " r = " <<r<< endl;
	float R = (a*sqrt(3)) / 3;
	cout << " R = "<<R << endl;

	


	int vik = 0;
	const int povn = 18;
	cout << "Enter your vik : ";
	cin >> vik;
	if (vik >= povn&&vik<=100)
	{
		cout << "      Vitaemo! You can golosyvatu.\n";
	} else if(vik>100)
	{
		cout << "      People not live 100 year!\n";
	}
	else if(vik>0&&vik<povn) {
		cout << "      You can golosyvatu cherez - " << povn - vik <<" years" << endl;
	}

	


	

	for (int i = 0; i < 8; i++)
	{


		if (i == 0)
		{
			cout << "1" << endl;
		}

		else if (i == 1)
		{
			cout << "3" << endl;
		}
		else if (i == 2)
		{
			cout << "22"<<endl;
		}
		else if (i == 3)
		{
			cout << "44"<<endl;
		}
		else if (i == 4)
		{
			cout << "333"<<endl;
		}
		else if (i == 5)
		{
			cout << "555" << endl;
		}
		else if (i == 6)
		{
			cout << "4444" << endl;
		}
		else if (i == 7)
		{
			cout << "6666" << endl;
		}
	}
	*/
	
#include<iostream>
using namespace std;
int main()
{



	int mas[m];

	for (int i = 0; i < m; i++)
	{
		cout << "Enter mas   :    ";
		cin >> mas[i];
	}
		
		








	system("pause");
	return 0;
}