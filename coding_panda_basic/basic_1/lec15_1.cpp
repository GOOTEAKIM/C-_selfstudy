// lec 15 ������ ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#define SIZE 20
using namespace std;


int main() {

	char animal[SIZE];
	char* ps;

	cout << "���� �̸��� �Է��Ͻʽÿ� \n";
	cin >> animal;
	// �Է� ���� ���� animal�� ����

	ps = new char[strlen(animal) + 1];
	// strlen : ������ ũ�⸦ ��ȯ

	strcpy(ps, animal);
	// strcpy : animal ���� ps�� ����

	cout << "�Է��Ͻ� ���� �̸��� �����Ͽ����ϴ�" << endl;
	cout << "�Է��Ͻ� ���� �̸��� " << animal << "�̰�, �� �ּҴ� " << (int*)animal << "�Դϴ�." << endl;
	cout << "����� ���� �̸��� " << ps << "�̰�, �� �ּҴ� " << (int*)ps << "�Դϴ�." << endl;

	delete[] ps;

	return 0;
}