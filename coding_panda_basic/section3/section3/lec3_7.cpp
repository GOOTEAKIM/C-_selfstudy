// lec 15 ������ ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#define SIZE 20
using namespace std;

struct MyStruct
{
	char name[20];
	int age;
};

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
	cout << " " << endl;

	// ���� ����ü ����

	MyStruct* temp = new MyStruct;

	cout << "����� �̸��� �Է��ϼ��� \n";
	cin >> temp->name;

	cout << "����� ���̸� �Է��ϼ��� \n";
	cin >> temp->age;

	cout << "�ȳ��ϼ���! " << temp->name << "��! \n";
	cout << "����� " << temp->age << "�� �̱���! \n";


	return 0;
}