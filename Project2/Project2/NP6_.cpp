#include <iostream>
#include <conio.h>
#include <ctime>
#include <math.h>
#include <cstdlib>
using namespace std;
int Fact(int n)
{

	if (n == 0)
		return 0;
	if (n == 1)
		return 1;

	return n * Fact(n - 1);
}

int main()
{
	setlocale(LC_ALL, "");
	int n, tmp, tmpN;
	cout << "????i?? ?????:";
	cin >> n;
	tmpN = n;
	n = n * 2;
	cout << "2n!=" << Fact(n) << endl;
	tmp = Fact(tmpN);
	tmp = tmp + tmpN;
	cout << "n!+n=" << tmp << endl;
	return 0;
}
