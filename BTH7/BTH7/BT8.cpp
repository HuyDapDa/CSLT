//#include <iostream>
//using namespace std;
//int fibonacci(int n)
//{
//	if (n <= 0)
//	{
//		cout << "So fibonacci khong hop le" << endl;
//		return -1;
//	}
//	else if (n == 1)
//	{
//		return 0;
//	}
//	else if (n == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		int n1 = 1;
//		int n2 = 0;
//		int n3 = 0;
//		for (int i = 2;i <= n;i++)
//		{
//			n3 = n1 + n2;
//			n2 = n1;
//			n1 = n3;
//		}
//		return n3;
//	}
//}
//int main()
//{
//	int n;
//	cout << "Nhap n: ";
//	cin >> n;
//	int n3 = fibonacci(n);
//	cout << "So fibonacci thu " << n << " la " << n3 << endl;
//	return 0;
//}
