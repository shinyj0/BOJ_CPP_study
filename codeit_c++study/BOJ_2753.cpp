#include <iostream>
using namespace std;

int main() {

	int year;
	cout << "������ �Ǻ��ϴ� ���α׷��Դϴ�. �����̸� 1 �ƴϸ� 0�� ��µ˴ϴ�. ������ �Է��Ͻÿ� :";
	cin >> year;

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		cout << "1";
	else
		cout << "0";
}