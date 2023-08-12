//#include <iostream>
//using namespace std;
//
//int xoaPhanTuTrung(int arr[], int& arrSize) {
//    int x = arrSize;
//
//    for (int i = 0; i < x; i++) {
//        for (int j = i + 1; j < x; j++) {
//            if (arr[i] == arr[j]) {             
//                for (int k = j; k < x - 1; k++) {
//                    arr[k] = arr[k + 1];
//                }
//                x--; 
//                j--; 
//            }
//        }
//    }
//
//    return x;
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
//    cout << "Nhap gia tri vao mang "<<endl;
//        for (int i = 0; i < arrSize; i++) {
//            cout << "arr[" << i << "]: ";
//            cin >> arr[i];
//        }
//
//    int x = xoaPhanTuTrung(arr, arrSize);
//
//    cout << "Day so sau khi xoa cac phan tu trung nhau: ";
//    for (int i = 0; i < x; i++) {
//        cout << arr[i];
//        if (i < x - 1) {
//            cout << ", ";
//        }
//    }
//    cout << endl;
//
//    return 0;
//}
