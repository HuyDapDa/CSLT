//#include<iostream>
//using namespace std;
//const int MAXSIZE = 100;
//int main()
//{
//	int arr[MAXSIZE];
//	int currentSize;
//	int position;
//	cout << "Nhap gia tri vao currentSize: ";
//	cin >> currentSize;
//	for (int i = 0; i < currentSize;i++)
//	{
//		cout << "arr[" << i << "]: ";
//		cin >> arr[i];
//	}
//	cout << "Nhap vi tri can xoa ( 0- " << currentSize - 1 << "): ";
//	cin >> position;
//	if (position < 0 || position >= currentSize)
//	{
//		cout << "Vi tri khong hop le." << endl;
//		return 0;
//	}
//	for (int i = 0;i < currentSize - 1;i++)
//	{
//		arr[i] = arr[i + 1];
//	}
//	currentSize--;
//	cout << "Mang sau khi xoa phan tu tai vi tri " << position << ":\n";
//	for (int i = 0;i < currentSize;i++)
//	{
//		cout << "arr[" << i << "]: " << arr[i] << endl;
//	}
//	return 0;
//}