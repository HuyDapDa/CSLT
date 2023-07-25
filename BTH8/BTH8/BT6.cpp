#include <iostream>
using namespace std;
void nhap(int arr[], int arrSize)
{
	cout << "Nhap gia tri vao arrSize: ";
	cin >> arrSize;
	for (int i = 0; i < arrSize;i++)
	{
		cout << "arr[" << i << "]: ";
		cin >> arr[i];
	}
}
void xuat(const int arr[], int arrSize)
{
	for (int i = 0;i < arrSize;i++)
	{
		cout << arr[i];
	}
}
bool tim(const int arr[], int arrSize, int x)
{

}
void daonguoc(int arr[], int arrSize)
{

}
void xoa(int arr[], int& arrSize, int p)
{
	cout << "Nhap vi tri can xoa ( 0- " << arrSize - 1 << "): ";
	cin >> p;
	if (p < 0 || p >= arrSize)
	{
		cout << "Vi tri khong hop le." << endl;
	}
	for (int i = 0;i < arrSize - 1;i++)
	{
		arr[i] = arr[i + 1];
	}
	arrSize--;
}
int main()
{
	return 0;
}