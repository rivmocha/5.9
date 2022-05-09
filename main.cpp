#include <iostream>

using namespace std;

#define High(x, y)	( x > y ? x : y )	//(함수 이름) (함수 기능)

int main()
{
	cout << "첫번째 숫자를 입력하세요" << endl;
	int x = 0;
	cin >> x;

	cout << "두번째 숫자를 입력하세요" << endl;
	int y = 0;
	cin >> y;

	int z = 0;
	z = High(x, y);
	cout << "더 큰 숫자는" << z << "입니다" << endl;





	return 0;
}

