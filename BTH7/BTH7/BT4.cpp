//#include <iostream>
//using namespace std;
//bool so(char a)
//{
//	return a >= '0' && a <= '9';
//}
//bool chu(char a)
//{
//	return a >= 'A' && a <= 'z';
//}
//void dem(int& demso, int& demchu, const string& str)
//{
//	demso = 0;
//	demchu = 0;
//	for (char a : str)
//		if (so(a))
//			demso++;
//		else
//			demchu++;
//}
//int main()
//{
//	int demso=0, demchu=0;
//	string str;
//	char a;
//	cout << "Nhap ky tu a: ";
//	cin >> a;
//	if (so(a))
//		cout << a << " la ky tu so." << endl;
//	else
//		cout << a << " khong phai la ky tu so." << endl;
//	if (chu(a))
//		cout << a << " la ky tu chu." << endl;
//	else
//		cout << a << " khong phai la ky tu chu." << endl;
//	cout << "Nhap chuoi: ";
//	cin >> str;
//	dem(demso,demchu,str);
//	cout << "So tu ky so la: " << demso << endl;
//	cout << "So tu ky chu la: " << demchu << endl;
//	return 0;
//}