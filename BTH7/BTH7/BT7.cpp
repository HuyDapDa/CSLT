//#include<iostream>
//using namespace std;
//bool inhoa(char a)
//{
//	return a >= 'A' && a <= 'Z';
//}
//bool inthuong(char a)
//{
//	return a >= 'a' && a <= 'z';
//}
//void dem(int& deminhoa, int& deminthuong, const string& str)
//{
//	deminhoa = 0;
//	deminthuong = 0;
//	for (char a : str)
//		if (inhoa(a))
//			deminhoa++;
//		else
//			deminthuong++;
//}
//int main()
//{
//	int deminthuong = 0;
//	int deminhoa = 0;
//	char a;
//	string str;
//	cout << "Nhap tu ky a:";
//	cin >> a;
//	if (inhoa(a))
//		cout << a << " la ky tu in hoa." << endl;
//	else
//		cout << a << " khong phai la ky tu in hoa." << endl;
//	if (inthuong(a))
//		cout << a << " la ky tu in thuong." << endl;
//	else
//		cout << a << " khong phai la ky tu in thuong." << endl;
//	cout << "Nhap chuoi: ";
//	cin >> str;
//	dem(deminhoa, deminthuong, str);
//	cout << "\nSo ky tu in hoa: " << deminhoa << endl;
//	cout << "So ky tu in thuong: " << deminthuong << endl;
//	return 0;
//}