// lec 12 . ����ü�� ����ü

#include <iostream>
#include <cstring>
using namespace std;

int main() {

	// ����ü (union)
	// ���� �ٸ� ���������� �� ���� �� ������ ������ �� ����

	union MyUnion
	{
		int intVal;
		long longVal;
		float floatVal;
	};

	MyUnion test;

	test.intVal = 3;
	cout << test.intVal << endl;

	test.longVal = 33;
	cout << test.intVal << endl;
	cout << test.longVal << endl;

	test.floatVal = 3.3;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	cout << test.floatVal << endl;

	// ����ü (enum)
	// ��ȣ ����� ����� �Ϳ� ���� �� �ٸ� ���

	enum spectrum {
		red = 0, orange = 2, yellow = 4, green, blue, violet, indigo, ultraviolet
	};

	// ���� �̷��� �Ҵ����ָ� green�� yellow�� 4�� �Ҵ������� +1 ���༭ 5�� �ȴ�.

	spectrum a = orange;

	cout << a << endl;

	int b;
	b = blue;
	b = blue + 3;

	cout << b << endl;

	return 0;
}