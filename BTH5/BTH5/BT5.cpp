//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, m;
//	int dem = 0;
//	bool lasonguyento = true;
//	do
//	{
//		cout << "Nhap 2 so nguyen duong: ";
//		cin >> n>>m;
//		if (n < 0)
//			cout << "Nhap sai, nhap lai!!!" << endl;;
//	} while (n<0);
//	for (int i = n;i <= m;i++) {
//		lasonguyento = true;
//		if (i >= 2)
//		{
//			for (int j = 2; j <= sqrt(i); j++)
//			{
//				if (i % j == 0)
//					lasonguyento = false;
//			}
//		}
//		else
//		{
//			lasonguyento = false;
//		}
//		if (lasonguyento)
//		{		
//			dem++;
//		}
//
//	}
//	cout << "Tu " << n << " den " << m << " co tat ca " << dem << " so nguyen to" << endl;
//	system("pause");
//	return 0;
//}