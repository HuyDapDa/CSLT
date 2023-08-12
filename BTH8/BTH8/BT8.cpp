//#include <iostream>
//using namespace std;
//
//int demSoLanXuatHien(const int arr[], int arrSize, int x) {
//    int count = 0;
//    for (int i = 0; i < arrSize; i++) {
//        if (arr[i] == x) {
//            count++;
//        }
//    }
//    return count;
//}
//
//int main() {
//    const int maxSize = 100;
//    int arr[maxSize];
//    int arrSize;
//
//    cout << "Nhap so phan tu cua mang: ";
//    cin >> arrSize;
//
//    cout << "Nhap gia tri vao mang: "<<endl;
//    for (int i = 0; i < arrSize; i++) {
//        cout << "arr[" << i << "]: ";
//        cin >> arr[i];
//    }
//    for (int i = 0;i < arrSize;i++)
//    {
//        cout << arr[i];
//    	if (i != arrSize - 1)
//    		cout << ", ";
//    	}
//    cout << endl;
//    int x;
//    cout << "Nhap gia tri can dem: ";
//    cin >> x;
//
//    int count = demSoLanXuatHien(arr, arrSize, x);
//    cout << "So lan xuat hien cua " << x << " trong mang la: " << count << endl;
//
//    return 0;
//}