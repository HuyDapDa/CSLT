//#include <iostream>
//using namespace std;
//int giaithua(int n)
//{
//	int tich = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		tich *= i;
//	}
//	return tich;
//}
//int tohop(int n, int k)
//{
//	int c = giaithua(n) / (giaithua(k) * giaithua(n - k));
//	return c;
//}
//void tamgiacpascal(int h)
//{
//	for (int i = 0; i < h;i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			cout << tohop(i, j) << " ";
//		}
//		cout << endl;
//	}	
//
//}
//int main()
//{
//	int n,k,h;
//	cout << "Nhap n: ";
//	cin >> n;
//	cout << "Nhap k: ";
//	cin >> k;
//	cout << "Nhap h: ";
//	cin >> h;
//	int ketqua = giaithua(n);
//	int ketqua2 = tohop(n, k);
//	cout << "Giai thua cua " << n << " la " << ketqua << endl;
//	cout << "To hop cua " << n <<" chap "<< k  << " la " << ketqua2 << endl;
//	tamgiacpascal(h);
//	system("pause");
//	return 0;
//}