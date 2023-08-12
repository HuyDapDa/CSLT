//#include <iostream>
//using namespace std;
//
//int viTriMin(const int arr[], int arrSize) {
//    if (arrSize == 0) {  
//        return -1;
//    }
//
//    int minIndex = 0;
//    for (int i = 1; i < arrSize; i++) {
//        if (arr[i] < arr[minIndex]) {
//            minIndex = i;
//        }
//    }
//    return minIndex;
//}
//
//int main() {
//    const int maxSize = 100;
//    int arr[maxSize];
//    int arrSize;
//    cout << "Nhap so phan tu cua mang: ";
//    cin >> arrSize;
//    cout << "Nhap gia tri vao mang: "<<endl;
//    for (int i = 0; i < arrSize; i++) {
//        cout << "arr[" << i << "]: ";
//        cin >> arr[i];
//    }
//    for (int i = 0;i < arrSize;i++)
//	{
//		cout << arr[i];
//		if (i != arrSize - 1)
//			cout << ", ";
//	}
//    cout << endl;
//    int minIndex = viTriMin(arr, arrSize);
//    if (minIndex != -1) {
//        cout << "Phan tu nho nhat xuat hien dau tien tai vi tri: " << minIndex << endl;
//    }
//    else {
//        cout << "Mang rong. Khong co phan tu nho nhat." << endl;
//    }
//
//    return 0;
//}