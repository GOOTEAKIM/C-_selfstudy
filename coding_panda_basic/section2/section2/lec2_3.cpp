#include <iostream>

using namespace std;

int main() {

	// char : ���� ������

	char b = 'a';
	char c[] = {'a', 'b', 'c', '\0'};
	// null ���� : '\0'
	// "" >> ��������� null ���ڰ� ����

	cout << b << endl;
	cout << c << endl;

	// bool : 0 Ȥ�� 1�� ��Ÿ���� ����

	bool d = 0;
	bool e = 1;
	bool f = 10;

	cout << d << " " << e << " " << f << endl;

	return 0;
}