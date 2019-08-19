#include<iostream>
#include<ctime>

using namespace std;
int main()
{
	srand(unsigned(time(NULL)));
	/*int q=0, w=0, e=0, r=0, t=0, y=0, u=0, i=0, o=0, p=0, a=0, s=0, d=0, f=0, g=0, h=0, j=0, k=0, l=0, z=0, x=0, c=0, v=0, b=0;

	int days[7];
	cout <<"Address =>"<< days << endl;

	days[0] = 27;
	days[1] = 28;
	days[2] = 24;
	days[3] = 26;
	days[4] = 21;
	days[5] = 29;
	days[6] = 32;



	cout << days[6] << endl;
	days[6] = 34;

	cout << days[6] << endl;
	*/










	/*
	int mas[10];
	int Dob = 1;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter mas [ " << i << " ] = ";
		cin >> mas[i];
		Dob *= mas[i];

	}
	cout << "------------------------------------>>" << endl;


	for (int i = 0; i < 10; i++)
	{
		cout << "Enter mas [ " << i << " ] = " << mas[i] << endl;;
		//Dob *= mas[i];
		
	}
	cout << "------------------------------------>>" << endl;

	cout << "Dod = " << Dob << endl;
	*/












	/*
	int num[7];
	int dod=0, vid=0;

	for (int i = 0; i < 7; i++)
	{
		num[i] = rand() % 50 + -12;
		cout << " Num [ " << i << " ] = " << num[i] << endl;

		if (num[i] < 0)
		{
			vid++;
		}
		else
		{
			dod++;
		}
	}
	cout << "------------------------------->>" << endl;
	cout << " Dodatnih elementiv = " << dod << endl;

	cout << " Videmnuh elementiv = " << vid << endl;
*/












/*
int mod[5];

for (int i = 0; i < 5; i++)
{
	mod[i] = rand() % 30 + -12;
	cout << " Mod [ " << i << " ] = " << mod[i] << endl;

	if (mod[i] < 0)
	{
		mod[i]=mod[i]*(-1);
	}
	else
	{
		mod[i];
	}
}

cout << "------------------------------->>" << endl;
for (int i = 0; i < 5; i++)
{
	cout << " Mod [ " << i << " ] = " << mod[i] << endl;
}
*/






/*

int init[7] = { 2,-5,6,12,-28,11,9 };
int Sum = 0;



cout << "------------------------------->>" << endl;

for (int i = 0; i < 7; i++)
{
	cout << " Init [ " << i << " ] = " << init[i] << endl;
	if (i % 2 == 0)
	{
		Sum += init[i];
	}
}

cout << "------------------------------->>" << endl;
cout << " Sums = " << Sum << endl;

*/



















/*


int cool[6];
int max = 0, min = 0, n;
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
cout << " Sums = " << Sum << endl;



	system("pause");
	return 0;
}