// �Լ��� ����

#include <iostream>

using namespace std;

const float PIE = 3.14;
void cheers(int n);
float circle(int x);

int main() {

	int a;
	cout << "�ϳ��� ���� �Է��ϼ���" << endl;
	cin >> a;
	cheers(a);


	int b;
	cout << "���� ������ ���̸� �Է��ϼ���." << endl;
	cin >> b;
	float c = circle(b);
	cout << "���� ���̴� " << c << " �Դϴ�." << endl;

}

void cheers(int n) {
	for (int i = 0; i < n; i++) {
		cout << "Cheers!" << endl;
	}
}

float circle(int x) {
	return x * x * PIE;
}

// �Լ���?

// �ϳ��� Ư���� ������ �۾��� �����ϱ� ���� ���������� ����� �ڵ��� ����

// C++ ���� �Լ��� ���߾�� �ϴ� ����

/*
1. �Լ� ���� ����
2. �Լ� ���� ����
3. �Լ� ȣ��
*/

// �Լ��� ����

/*
1. ���� ���� �ִ� �Լ�

typeName funcionName(parameterList)
{
	statement(s);
	return value;
}

2. ���� ���� ���� �Լ�

void funcionName(parameterList)
{
	statement(s);
	return; // ������ �� ����
}
*/

// void�� �ִ�? return �� ����
// void�� ����? return �� ����

// C++ ������ �迭�� ������ ��� ���� ������ �� �ִ�.

