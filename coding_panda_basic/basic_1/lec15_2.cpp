#include <iostream>
using namespace std;

struct MyStruct
{
	char name[20];
	int age;
};

int main() {

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