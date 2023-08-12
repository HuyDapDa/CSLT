//#include <iostream>
//using namespace std;
//void nhap(int arr[], int arrSize)
//{
//	for (int i = 0; i < arrSize;i++)
//	{
//		cout << "arr[" << i << "]: ";
//		cin >> arr[i];
//	}
//}
//void xuat(const int arr[], int arrSize)
//{
//	for (int i = 0;i < arrSize;i++)
//	{
//		cout << arr[i];
//		if (i != arrSize - 1)
//			cout << ", ";
//	}
//}
//bool tim(const int arr[], int arrSize, int x)
//{
//	for (int i = 0; i < arrSize; i++) {
//		if (arr[i] == x) {
//			return true; 
//		}
//	}
//	return false;
//}
//void daonguoc(int arr[], int arrSize)
//{
//	int left = 0;
//	int right = arrSize - 1;
//	while (left < right) {
//
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//
//		left++;
//		right--;
//	}
//}
//void xoa(int arr[], int& arrSize, int p)
//{
//	if (p < 0 || p >= arrSize)
//	{
//		cout << "Vi tri khong hop le." << endl;
//	}
//	for (int i = 0;i < arrSize - 1;i++)
//	{
//		arr[i] = arr[i + 1];
//	}
//	arrSize--;
//}
//int main()
//{
//	const int maxSize = 100;
//	int arr[maxSize];
//	int arrSize;
//	cout << "Nhap so phan tu cua mang: ";
//	cin >> arrSize;
//	nhap(arr, arrSize);
//	cout << "Day so vua nhap: ";
//	xuat(arr, arrSize);
//	int x;
//	cout << "\nNhap gia tri can tim: ";
//	cin >> x;
//	if (tim(arr, arrSize, x)) {
//		cout << "Tim thay gia tri " << x << " trong mang." << endl;
//	}
//	else {
//		cout << "Khong tim thay gia tri " << x << " trong mang." << endl;
//	}
//	daonguoc(arr, arrSize);
//	cout << "\nDay so sau khi dao nguoc: ";
//	xuat(arr, arrSize);
//	int p;
//	cout << "\nNhap vi tri can xoa: ";
//	cin >> p;
//	xoa(arr, arrSize, p);
//	cout << "\nDay so sau khi xoa: ";
//	xuat(arr, arrSize);
//	return 0;
//}