// switch ���� break continue ��

#include <iostream>
using namespace std;

const int SIZE = 30;

int main() {

	//cout << "���ڸ� �Է��ϼ���" << endl;

	//int a;

	//cin >> a;

	//switch (a)
	//{
	//case 1:
	//	cout << "�Է��Ͻ� ���� 1�Դϴ� \n";
	//	break;

	//case 2:
	//	cout << "�Է��Ͻ� ���� 2�Դϴ� \n";
	//	break;	
	//
	//case 3:
	//	cout << "�Է��Ͻ� ���� 3�Դϴ� \n";
	//	break;

	//// �ش� ���̽��� ���ٸ� default ���� ��ȯ
	//default:
	//	cout << "�Է��Ͻ� ���� 1,2,3 �̿��� �ٸ� ���Դϴ�." << endl;
	//}

	//cout << "switch ������ �������ϴ� \n";

	//// break : ��� ������ �������� ��� ����

	//int i = 0;

	//while (true) {

	//	cout << "i�� ���� " << i << " �Դϴ�." << endl;

	//	if (i > 10)
	//		break;
	//	i++;
	//}

	//cout << "while ���� �������ϴ�. \n";

	cout << "������ �Է��ϼ��� \n";
	char line[SIZE];
	cin.get(line, SIZE);
	cout << "�Է��Ͻ� ������ \n";

	int spaces = 0;
	for (int i = 0; line[i] != '\0'; i++) {
		cout << line[i];

		if (line[i] != ' ')
			continue;
		spaces++;
	}

	cout << "�Դϴ� \n";
	cout << "�Է��Ͻ� ���忡�� ������ ������ ���� ���� " << spaces << "�� �Դϴ� \n";
	cout << "for ���� �������ϴ�.";

	return 0;
}