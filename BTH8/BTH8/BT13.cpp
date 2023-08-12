//#include <iostream>
//using namespace std;
//
//void inSoLanXuatHien(const int arr[], int arrSize, int k) {
//    const int maxK = 100;
//    int count[maxK] = { 0 }; 
//    for (int i = 0; i < arrSize; i++) {
//        if (arr[i] >= 1 && arr[i] <= k) {
//            count[arr[i] - 1]++;
//        }
//    }
//    for (int i = 0; i < k; i++) {
//        cout << "Phan tu " << i + 1 << " xuat hien " << count[i] << " lan." << endl;
//    }
//}
//
//int main() {
//    const int maxSize = 100;
//    int arr[maxSize];
//    int arrSize, k;
//
//    cout << "Nhap so phan tu cua mang: ";
//    cin >> arrSize;
//
//    cout << "Nhap gia tri vao mang trong khoang 1 den k "<<endl;
//        for (int i = 0; i < arrSize; i++) {
//           cout << "arr[" << i << "]: ";
//           cin >> arr[i];
//        }
//
//    cout << "Nhap gia tri k: ";
//    cin >> k;
//    inSoLanXuatHien(arr, arrSize, k);
//
//    return 0;
//}
