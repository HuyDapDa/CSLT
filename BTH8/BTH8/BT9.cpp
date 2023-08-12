//#include <iostream>
//
//using namespace std;
//
//double tinhGiaTriDaThuc(const double arr[], int n, double x) {
//    double result = 0.0;
//    double x_power = 1.0;
//    for (int i = 0; i <= n; i++) {
//        result += arr[i] * x_power;
//        x_power *= x;
//    }
//    return result;
//}
//
//int main() {
//    const int maxDegree = 100;
//    double arr[maxDegree + 1];
//    int n;
//    double x;
//    cout << "Nhap bac cua da thuc: ";
//    cin >> n;
//
//    cout << "Nhap gia tri x: ";
//    cin >> x;
//
//    cout << "Nhap cac he so cua da thuc tu a0 den aN: ";
//     for (int i = 0; i < n; i++) {
//        cout << "arr[" << i << "]: ";
//        cin >> arr[i];
//    }
//
//    double result = tinhGiaTriDaThuc(arr, n, x);
//    cout << "Gia tri cua da thuc voi x = " << x << " la: " << result << endl;
//
//    return 0;
//}