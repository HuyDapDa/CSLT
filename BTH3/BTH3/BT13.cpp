#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double a, b, c,d;
	cout << "Nhap 3 so: ";
	cin >> a >> b >> c;
	d = pow(b, 2) - (4 * a * c);
	if (d == 0)
		cout << "Phuong trinh co nghiem kep: " << -b / 2 * a;
	else if (d < 0)
		cout << "Phuong trinh vo nghiem";
	else
	{
		cout << "Phuong trinh co nghiem thu nhat la: " << (-b + sqrt(d)) / 2 * a << endl;;
		cout << "Phuong trinh co nghiem thu hai la: " << (-b - sqrt(d)) / 2 * a << endl;;
	}
		return 0;
}