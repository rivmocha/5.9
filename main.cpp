#include <iostream>

using namespace std;

#define High(x, y)	( x > y ? x : y )	//(�Լ� �̸�) (�Լ� ���)

int main()
{
	cout << "ù��° ���ڸ� �Է��ϼ���" << endl;
	int x = 0;
	cin >> x;

	cout << "�ι�° ���ڸ� �Է��ϼ���" << endl;
	int y = 0;
	cin >> y;

	int z = 0;
	z = High(x, y);
	cout << "�� ū ���ڴ�" << z << "�Դϴ�" << endl;





	return 0;
}

