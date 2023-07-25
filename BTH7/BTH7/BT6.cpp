//#include <iostream>
//#include <iomanip>
//using namespace std;
//void menu()
//{
//	cout << "1.Cong";
//	cout << "\n2.Tru";
//	cout << "\n3.Nhan";
//	cout << "\n4.Chia" << endl;
//}
//int cong(int a, int b)
//{
//	return a + b;
//}
//int tru(int a, int b)
//{
//	return a - b;
//}
//int nhan(int a, int b)
//{
//	return a * b;
//}
//double chia(int a, int b)
//{
//	if (b != 0)
//		return double(a) / b;
//}
//int main()
//{
//	char t;
//	int a, b;
//	cout << "Nhap a va b: ";
//	cin >> a >> b;
//	do
//	{
//		int chon;
//		
//		menu();
//		cout << "Lua chon tu 1 den 4" << endl;
//		cin >> chon;
//		switch (chon)
//		{
//		case 1:
//			cout << a << " + " << b << " = " << cong(a, b)<<endl;
//			break;
//		case 2:
//			cout << a << " - " << b << " = " << tru(a, b)<<endl;
//			break;
//		case 3:
//			cout << a << " * " << b << " = " << nhan(a, b)<<endl;
//			break;
//		case 4:
//			cout << a << " / " << b << " = " << chia(a, b)<<endl;
//			break;
//		default:
//			cout << "Lua chon ko hop le";
//		}
//		cout << "Tiep tuc(C/K): ";
//		cin >> t;
//	} while (t == 'c' || t == 'C');
//
//	return 0;
//}