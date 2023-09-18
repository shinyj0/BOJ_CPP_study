#include <iostream>
using namespace std;

int main() {
	int b_year;
	int s_year;

	cout << "불기 연도를 입력하시오 :" ;
	cin >> b_year;
	s_year = b_year -( 2541 - 1998);
	cout << "서기 연도: " << s_year;
	return 0;

}