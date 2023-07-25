#include<iostream>
using namespace std;
int main()
{
	char ch;
	int i;
	cout << "Nhap ky tu tu ban phim: ";
	cin >> ch;
	int ascii = ch;
	cout << "Ma ASCII cua ky tu " << ch << " la: " << ascii << endl;
	cout << "Nhap vao mot so nguyen: ";
	cin >> i;
	char ascii1 = i;
	cout << "Ky ty ASCII cua so " << i << " la: " << ascii1 << endl;
	system("pause");
	return 0;
}