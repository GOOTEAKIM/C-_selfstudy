// �Ű������� ��������

#include <iostream>

using namespace std;

void hellCPP(int, int);

int main() {

	int times, times2;

	cout << "������ �Է��ϼ��� \n";
	cin >> times;

	cout << "������ �ѹ� �� �Է��ϼ��� \n";
	cin >> times2;

	hellCPP(times, times2);

	return 0;
}

void hellCPP(int n, int m) {
	for (int i = 0; i < n; i++)
		cout << "Hello \n";

	for (int i = 0; i < m; i++)
		cout << "C++ \n";
	
}

/*

�Լ��� 1�� �̻��� �Ķ���͸� �� �� �ִ�.

*/