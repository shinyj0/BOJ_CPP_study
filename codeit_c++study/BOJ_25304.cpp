#include <iostream>
using namespace std;

int main() {
	int total_price;
	int N;
	int a=0;
	int b = 0;
	//a,b=0 �Ѵ� 0���� �ϴ� ����?
	int sum=0;
	cin >> total_price;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		cin >> b;
		sum= sum+ a * b;
	}
	if (total_price == sum)
		cout << "Yes";
	else
		cout << "No";
}