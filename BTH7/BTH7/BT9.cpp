//#include <iostream>
//using namespace std;
//int namnhuan(int y)
//{
//	return(y % 400 == 0 || y % 4 == 0 & y % 100 != 0);
//}
//int ngay(int m, int y)
//{
//	if (m == 2)
//	{
//		return namnhuan(y) ? 29 : 28;
//	}
//	else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
//		return 31;
//	else
//		return 30;
//}
//int ngaycuannam(int d, int m, int y)
//{
//	int doy = 0;
//	for (int i = 1; i < m;i++)
//	{
//		doy += ngay(i, y);
//	}
//	doy += d;
//	return doy;
//}
//int main()
//{
//	int d, m, y;
//	do {
//		
//		cout << "nhap ngay thang nam: ";
//		cin >> d >> m >> y;
//		if (d > 31 || m > 12 )
//			cout << "nhap sai, nhap lai!!!!" << endl;
//	} while (d > 31 || m > 12 );
//
//	
//	int dayofyear = ngaycuannam(d, m, y);
//	cout << "so ngay cach ngay dau tien trong nam la: " << dayofyear << endl;
//	return 0;
//}