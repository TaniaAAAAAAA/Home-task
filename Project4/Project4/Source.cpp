
                        //  7.3

#include<iostream>

#include<string>

#include <cstdio>

#include <cstring>

using namespace std;



void trimSpace(char s[], char d[])

{

	int i = 0, count = 0, j = 0;



	while (s[i])

	{

		if (s[i] != ' ')

			s[count++] = s[i++];

		else {

			s[count++] = ' ';



			while (s[i] == ' ')

				i++;

		}

	}



	s[count] = '\0';



	i = 0, count = 0, j = 0;

	while (d[i])

	{

		if (d[i] != ' ')

			d[count++] = d[i++];

		else {

			d[count++] = ' ';



			while (d[i] == ' ')

				i++;

		}

	}



	d[count] = '\0';

	cout << "1" << ":" << strlen(s) << endl;

	cout << "2" << ":" << strlen(d) << endl;

	(strlen(s) > strlen(d)) ? cout << "srting1 >string2 \n" : cout << "srting2 >string1\n";



}



int main()

{

	char string1[1000];

	char string2[1000];

	cout << "  Enter String 1: ";

	cin.getline(string1, 1000);



	cout << "  Enter String 2: ";

	cin.getline(string2, 1000);

	trimSpace(string1, string2);

	system("pause");
	return 0;

}




