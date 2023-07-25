#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int Bin, Dec = 0;
	int i = 0;
	cout << "Nhap so nhi phan: ";
	cin >> Bin;
	do
	{
		Dec = Dec + (Bin % 10) * pow(2.0, i);
		i++;
	} while ( Bin > 0);
	cout <<""
	return 0;
}