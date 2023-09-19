#include <iostream>
using namespace std;

int main() {

	int year;
	cout << "윤년을 판별하는 프로그램입니다. 윤년이면 1 아니면 0이 출력됩니다. 연도를 입력하시오 :";
	cin >> year;

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		cout << "1";
	else
		cout << "0";
}