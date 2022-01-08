#include <iostream>

using namespace std;
//문제 4
int func4(int N) {
	int val = 1;
	while (2 * val <= N)
		val *= 2;
	return val;
	//int temp = 0;
	//for (int i = 1; i <= N;i++) {
	//	if (i % 2 == 0)
	//		temp = i;
	//	i = i * i;
	//}
	//return temp;
}
int main(void) {
	int N;
	cin >> N;
	int op = func4(N);
	cout << op;
	return 0;
}
//문제 3

//정답 코드
//int func3(int N) {
//	for (int i = 1; i * i <= N; i++) {
//		if (i * i == N)
//			return 1;
//	}
//	return 0;
//}
////int func3(int N) {
////	for (int i = 1; i < N; i++) {
////		if (N / i == i&& N%(i*i) == 0)
////			return 1;
////	}
////	return 0 ;
////}
//
//int main(void) {
//
//	int N;
//	cin >> N;
//	int output = func3(N);
//	cout << output;
//	return 0;
//	}

//문제 2
//int func2(int arr[], int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = i+1; j < n; j++) {
//			if ((arr[i] + arr[j]) == 100)
//				return 1;
//		}		
//	}
//
//	return 0;
//}
//
//int main(void) {
//	int arr[4] = {4,13,63,87};
//	int output;
//	output = func2(arr, 4);
//	cout << output;
//	return 0;
//}

//문제 1
//int func1(int n) {
//	int sum = 0;
//	for (int i = 1; i <= n; i++) {
//		if (i % 3 == 0 || i % 5 == 0)
//			sum += i;
//	}
//	return sum;
//}
//
//int main(void) {
//	int  f;
//	f = func1(27639);
//	cout << f;
//	return 0;
//}