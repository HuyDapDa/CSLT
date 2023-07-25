//#include<iostream>
//using namespace std;
//int main()
//{
//	int thang, nam;
//	do
//	{
//		cout << "Nhap thang: ";
//		cin >> thang;
//		cout << "Nhap nam: ";
//		cin >> nam;
//		if (thang < 1 || thang >12 || nam < 1)
//		{
//			cout << "Nhap sai, hay nhap lai!!!!" << endl;;
//		}
//	} while (thang < 1 || thang >12 || nam < 1);
//
//	if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0) {
//		if (thang == 2)
//			cout << "So ngay cua thang " << 2 << " la 29 ngay!!";
//		else if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
//			cout << "So ngay cua thang " << thang << " la 31 ngay!!";
//		else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
//			cout << "So ngay cua thang " << thang << " la 30 ngay!!";
//	}
//	else{
//		if (thang == 2)
//			cout << "So ngay cua thang " << 2 << " la 28 ngay!!";
//		else if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
//			cout << "So ngay cua thang " << thang << " la 31 ngay!!";
//		else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
//			cout << "So ngay cua thang " << thang << " la 30 ngay!!";
//	}
//
//	cout << endl;
//	return 0;
//}