// �� ǥ����

#include <iostream>

using namespace std;

int main() {

	// �� ǥ����

	// ���� : ||
	// ���� : &&
	// �� ���� ������ : !=

	cout << "����� ���̸� �Է��ϼ���." << endl;
	int age;
	cin >> age;

	if (age < 0 || age > 100) {
		cout << "������ �Ͻø� �ȵ˴ϴ�! \n";
	}
	else if (20 <= age && age <= 29) 
	{
		cout << "����� 20�� �Դϴ�. \n";
	}
	else
	{
		cout << "����� ���̸� �𸣰ڽ��ϴ�. \n";
	}

	return 0;
}