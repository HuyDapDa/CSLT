//#include <iostream>
//#include <cmath>
//using namespace std;
//
//void songuyento(int n)
//{
//	bool songuyento = true;
//	if (n >= 2)
//	{
//		int i = 2;
//		while (i <= sqrt((double)n) && songuyento)
//		{
//			if (n % i == 0)
//				songuyento = false;
//			i++;
//		}
//	}
//	else
//	{
//		songuyento = false;
//	}
//	if(songuyento)
//		cout << n << " la so nguyen to "<<endl;
//	else
//		cout << n << " khong phai la so nguyen to ";
//	//cout << "cac so nguyen to ko vuot" << n << endl;
//	//for(int i = 2;i<=n;i++)
//	//if(KTNT(i))
//	//	cout << " " <<i;
//	//cout <<"Cac so khong nguyen to khong vuot qua " << n << endl;
//	//for(int i = 1; i<=n;i++)
//	//if(!KTNT(i))
//	//	cout << " " << i;
//	//cout << endl;
//
//}
//int main()
//{
//	int n;
//	cout << "Nhap n: ";
//	cin >> n;
//	songuyento(n);
//	return 0;
//}