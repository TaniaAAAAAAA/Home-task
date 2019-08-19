#include<iostream>
#include<ctime>

using namespace std;
int main()
{
	srand(unsigned(time(NULL)));

	char name[10];
	int Player = 0, Bill = 0;
	int Playerpoint = 0, Billpoint = 0;

	cout << "                    GAME ""CUBES""!\n\n";
	cout << "                    Enter YOR name :   ";
	cin >> name;
	
	cout << "                             Course " << name << endl<<endl;

	system ("pause");

	for (int i = 0; Playerpoint < 5 && Billpoint < 5; i++)
	{
		
		Player = rand() % 6 + 1;


		switch (Player)
		{
		case 1:

			
						cout << "          ******\n";
						cout << "        ********\n";
						cout << "       ***   ***\n";
						cout << "      ***    ***\n";
						cout << "             ***\n";
						cout << "             ***\n";
						cout << "             ***\n";
						cout << "             ***\n";
						cout << "             ***\n";
						cout << "             ***\n";

			break;


		case 2:
			

						cout << "       *********\n";
						cout << "       *********\n";
						cout << "       *********\n";
						cout << "             ***\n";
						cout << "       *********\n";
						cout << "       *********\n";
						cout << "       ***\n";
						cout << "       ***\n";
						cout << "       *********\n";
						cout << "       *********\n";


		
			break;


		case 3:
		
						cout << "          *********\n";
						cout << "          *********\n";
						cout << "                ***\n";
						cout << "                ***\n";
						cout << "          *********\n";
						cout << "          *********\n";
						cout << "                ***\n";
						cout << "                ***\n";
						cout << "          *********\n";
						cout << "          *********\n";


				
			break;

		case 4:

			

						cout << "       ***   ***\n";
						cout << "       ***   ***\n";
						cout << "       ***   ***\n";
						cout << "       ***   ***\n";
						cout << "       *********\n";
						cout << "       *********\n";
						cout << "             ***\n";
						cout << "             ***\n";
						cout << "             ***\n";
						cout << "             ***\n";


			break;

		case 5:

		

						cout << "      *********\n";
						cout << "      *********\n";
						cout << "      ***\n";
						cout << "      ***\n";
						cout << "      *********\n";
						cout << "      *********\n";
						cout << "            ***\n";
						cout << "            ***\n";
						cout << "      *********\n";
						cout << "      *********\n";
						break;


		case 6:

			            cout << "        ************\n";
						cout << "        ************\n";
						cout << "        *****    ***\n";
						cout << "        *****       \n";
						cout << "        ************\n";
						cout << "        *****    ***\n";
						cout << "        *****    ***\n";
						cout << "        *****    ***\n";
						cout << "        ************\n";
						cout << "        ************\n";
				break;




		default: cout << "  \n "; break;

		}
		cout << "                             Course Bill \n" ;
		system("pause");


        Bill = rand() % 6 + 1;
		

		switch (Bill)
		{
		case 1:


			cout << "                                      ******\n";
			cout << "                                    ********\n";
			cout << "                                   ***   ***\n";
			cout << "                                  ***    ***\n";
			cout << "                                         ***\n";
			cout << "                                         ***\n";
			cout << "                                         ***\n";
			cout << "                                         ***\n";
			cout << "                                         ***\n";
			cout << "                                         ***\n";



			break;



		case 2:

			cout << "                                   *********\n";
			cout << "                                   *********\n";
			cout << "                                   *********\n";
			cout << "                                         ***\n";
			cout << "                                   *********\n";
			cout << "                                   *********\n";
			cout << "                                   ***\n";
			cout << "                                   ***\n";
			cout << "                                   *********\n";
			cout << "                                   *********\n";


			break;


		case 3:


			cout << "                                   *********\n";
			cout << "                                   *********\n";
			cout << "                                         ***\n";
			cout << "                                         ***\n";
			cout << "                                   *********\n";
			cout << "                                   *********\n";
			cout << "                                         ***\n";
			cout << "                                         ***\n";
			cout << "                                   *********\n";
			cout << "                                   *********\n";



			break;

		case 4:

			cout << "                                   ***   ***\n";
			cout << "                                   ***   ***\n";
			cout << "                                   ***   ***\n";
			cout << "                                   ***   ***\n";
			cout << "                                   *********\n";
			cout << "                                   *********\n";
			cout << "                                         ***\n";
			cout << "                                         ***\n";
			cout << "                                         ***\n";
			cout << "                                         ***\n";



			break;

		case 5:


			cout << "                                 *********\n";
			cout << "                                 *********\n";
			cout << "                                 ***\n";
			cout << "                                 ***\n";
			cout << "                                 *********\n";
			cout << "                                 *********\n";
			cout << "                                       ***\n";
			cout << "                                       ***\n";
			cout << "                                 *********\n";
			cout << "                                 *********\n";


			break;


		case 6:

			cout << "                               ************\n";
			cout << "                               ************\n";
			cout << "                               *****    ***\n";
			cout << "                               *****       \n";
			cout << "                               ************\n";
			cout << "                               *****    ***\n";
			cout << "                               *****    ***\n";
			cout << "                               *****    ***\n";
			cout << "                               ************\n";
			cout << "                               ************\n";


			break;


		default: cout << "  \n "; break;
		}


		if (Player > Bill)
		{
			Playerpoint++;
		
		}
		else if (Bill > Player)
		{
			Billpoint++;
			
		}
		

		cout << name << "   " << Playerpoint << "                                                   Bill   " << Billpoint << endl;
		cout << "                             Course "<<name<<endl;

		system("pause");
}


	if (Playerpoint < Billpoint)
	{
		cout << "                           Win   Bill !!!\n";
	}
	else
	{
		cout << "                           Win   "<<name <<"!!!\n";
	}

	system("pause");
	return 0;
}