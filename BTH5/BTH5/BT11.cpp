#include <iostream>
using namespace std;
int main()
{
	int c;
	do
	{
		cout << "Nhap canh: ";
		cin >> c;
		if (c<0)
			cout << "Nhap sai, nhap lai!!!" << endl;;
	} while(c < 0);
	for (int i = 0; i < c;i++)
	{
		for (int j = 0; j < c;j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 1; i <= c;i++)
	{
		for (int j = 1; j <= c;j++)
		{
			if (i == 1 || i == c || j == 1 || j == c) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}


	return 0;
}