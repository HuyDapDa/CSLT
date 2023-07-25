//#include <iostream>
//using namespace std;
// void hoandoi(int& n, int& m)
//{
//	int tmp = n;
//	n = m;
//	m = tmp;
//}
//void sapxep2sogiamdan(int& n, int& m)
//{
//	if (n < m)
//	{
//		hoandoi(n, m);
//	}
//
//}
//void sapxep3sotangdan(int& n, int& m, int& l)
//{
//	if (n > m)
//		hoandoi(n, m);
//	 if (n > l)
//		hoandoi(n, l);
//	 if (m > l)
//		hoandoi(m, l);
//}
//void sapxep3sogiamdan(int& n, int& m, int& l)
//{
//
//	if (n < m)
//		hoandoi(n, m);
//	if (n < l)
//		hoandoi(n, l);
//	 if (m < l)
//		hoandoi(m, l);
//	
//}
//int main()
//{
//	int n, m, l;
//	cout << "Nhap n,m,l: ";
//	cin >> n >> m>>l;
//	sapxep2sogiamdan(n, m);
//	cout << "So sau khi sap xep: " << n << ", " << m << endl;
//	sapxep3sotangdan(n, m, l);
//	cout << "So sau khi sap xep tang dan: " << n << ", " << m << ", " << l << endl;
//	sapxep3sogiamdan(n, m, l);
//	cout << "So sau khi sap xep giam dan: " << n << ", " << m << ", " << l << endl;
//	return 0;
//}