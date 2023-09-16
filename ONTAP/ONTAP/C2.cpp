//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <ctime>
//#include <cstdlib>
//
//using namespace std;
//const int Size = 50;
//const  int min_value = 1;
//const int max_value = 20;
//int main()
//{
//	vector<int> numbers;
//	for (int i = 0;i < Size;i++)
//	{
//		int n = rand() % (max_value - min_value + 1) + min_value;
//		numbers.push_back(n);
//	}
//	sort(numbers.begin(), numbers.end(), [](int a, int b) {
//		if (a % 2 != 0 && b % 2 != 0) {
//			return a < b;
//		}
//		else if (a % 2 == 0 && b % 2 == 0) {
//			return a > b;
//		}
//		else {
//			return a % 2 == 0; 
//		}
//		});
//	cout << "Mang sau khi sap xep: \n";
//	for (int n : numbers) {
//		cout << n << " ";
//	}
//	cout << endl;
//	return 0;
//
//}