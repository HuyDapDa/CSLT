//#include <iostream>
//using namespace std;
//
//void swap(int& a, int& b) {
//    int temp = a;
//    a = b;
//    b = temp;
//}
//bubble sort
//void sapXepTangDan(int arr[], int arrSize) {
//    for (int i = 0; i < arrSize - 1; i++) {
//        for (int j = 0; j < arrSize - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                swap(arr[j], arr[j + 1]);
//            }
//        }
//    }
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
//
//    sapXepTangDan(arr, arrSize);
//
//    cout << "Day so sau khi sap xep tang dan: ";
//    for (int i = 0; i < arrSize; i++) {
//        cout << arr[i];
//        if (i < arrSize - 1) {
//            cout << ", ";
//        }
//    }
//    cout << endl;
//
//    return 0;
//}