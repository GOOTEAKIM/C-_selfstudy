
// lec 7

#include <iostream>	
//#define PIE 3.1415926535 
using namespace std;

int main() {
	// ���� ���̸� ���ϴ� ���α׷�

	// 1. �ٲ� �ʿ䰡 ���� ��
	
	const float PIE = 3.1415926535;

	int r;

	r = 3;

	float s = r * r * PIE;
	
	cout << s << endl;

	// �������� ��ȯ

	/*
	1. Ư�� ���������� ������ �ٸ� ���������� ���� �������� ��
	2. ���Ŀ� ���������� ȥ���Ͽ� ������� ��
	3. �Լ��� �Ű������� ������ ��
	*/

	int a = 3.141592;

	cout << a << endl;

	// ���������� �������� ��ȯ

	// typeName(a) (typeName) a

	char ch = 'M';

	cout << (int)ch << " " << int(ch) << endl;
	cout << static_cast<int>(ch) << endl;

	// C++

	//static_cast<typeName>

	return 0;

}