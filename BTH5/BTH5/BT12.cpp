//#include <iostream>
//using namespace std;
//int main()
//{
//	int h;
//	do
//	{
//		cout << "Nhap chieu cao cua tam giac: ";
//		cin >> h;
//		if (h < 0)
//			cout << "Nhap sai, nhap lai!!!" << endl;;
//	} while(h < 0);
//	//a
//	for (int i = 1; i <= h;i++)
//	{
//		for (int j = 1; j <= i;j++)
//		{
//			if (i == 1 || i == h || j == 1 || j == i) {
//				cout << "*";
//			}
//			else {
//				cout << " ";
//			}
//		}
//		cout << endl;
//	}
//	cout << endl;
//	//b
//	for (int i = 1; i <= h;i++)
//	{
//		for (int j = 1; j <= h;j++)
//			if (j < h - i + 1)
//				cout << " ";
//			else
//
//				cout << "*";
//		cout << endl;
//	}
//	//c
//	cout << endl;
//	for (int i = h; i >= 1; i--) {
//		for (int j = 1; j <= i; j++) {
//			cout << "*";
//		}
//		cout << endl;
//	}
//	//d
//	cout << endl;
//	for (int i = 1; i <= h ; i++) {
//		for (int j = 1; j <= h ; j++) 
//			if (j < i)
//				cout << " ";
//			else
//				cout << "*";
//			cout << endl;
//		
//	}
//	//e
//	cout << endl;
//	int l = h, r = h;
//	for (int i = 1; i <= h; i++) {
//		for (int j = 1; j <= h; j++)
//			if (j >= l && j <= r) {
//				cout <<"*";
//				cout << " ";
//			}
//			else
//				cout << " ";
//		l--;
//		r++;
//		cout << endl;
//
//	}
//	return 0;
//}