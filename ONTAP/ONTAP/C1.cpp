//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//	int a,tam,chs;
//	int n, m;
//	int tongle = 0;
//	int tichchan = 1;
//	int tong = 0;
//	int i = 1;
//	bool lasonguyento = true;
//	cout << "Nhap a: ";
//	cin >>a;
//	tam = a;
//	while (tam>0)
//	{
//		chs = tam % 10;
//		if (chs % 2 == 0)
//			tichchan *= chs;
//		else
//			tongle += chs;
//		tam = tam / 10;
//
//	}
//
//	cout << "Nhap n,m: ";
//	cin >> n >> m;
//	for (int i = n;i <= m;i++) {
//		lasonguyento = true;
//		if (i >= 2)
//		{
//			for (int j = 2; j <= sqrt(i); j++)
//			{
//				if (i % j == 0)
//					lasonguyento = false;
//			}
//			
//		}
//		else
//		{
//			lasonguyento = false;
//		}
//		if (lasonguyento)
//		{
//			tong += i;
//		}
//
//	}
//
//	cout << "Tong le tu 1 den " << n << " la " << tongle << endl;
//	cout << "Tich chan tu 1 den " << n << " la " << tichchan << endl;
//	cout << "Tong cac so nguyen to tu " << n << " den " << m << " la " << tong << endl;
//	return 0;
//}