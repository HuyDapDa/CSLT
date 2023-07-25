//#include <iostream>
//using namespace std;
//
//bool kiem_tra_so_doi_xung(int n) {
//    int so_dao_nguoc = 0;
//    int temp = n;
//    while (temp != 0) {
//        int digit = temp % 10;
//        so_dao_nguoc = so_dao_nguoc * 10 + digit;
//        temp /= 10;
//    }
//    if (so_dao_nguoc == n) {
//        return true;
//    }
//    else {
//        return false;
//    }
//}
//
//int main() {
//    int n;
//    cout << "Nhap mot so nguyen: ";
//    cin >> n;
//    if (kiem_tra_so_doi_xung(n)) {
//        cout << n << " la so doi xung." << endl;
//    }
//    else {
//        cout << n << " khong phai la so doi xung." << endl;
//    }
//    return 0;
//}