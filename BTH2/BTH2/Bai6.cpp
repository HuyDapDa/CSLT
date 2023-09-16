#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,a,b,c;
	cout << "nhap so nguyen gom 3 chu so: ";
	cin >> n;
	c = n % 10;
	b = n / 10 % 10;
	a = n / 100;
	cout << "tong 3 so nguyen: " << a + b + c << endl;
	cout << "so dao nguoc: "<< c*100 + b*10 + a << endl;
	system("pause");
	return 0;
}