// lec 10. ����� �Է°� string

#include <iostream>
#include <cstring>

using namespace std;

int main() {

	const int Size = 15;

	char name1[Size];
	char name2[Size] = "C++programing";

	cout << "�ȳ��ϼ���! ���� " << name2;
	cout << "�Դϴ�! ������ ��� �ǽó���? \n";

	//cin >> name1;

	// cin :  ����ڰ� �Է��� ���� ���� ������ �������ش�.
	// white space �� �����Ѵ�.������ ������ �����ٰ� �����Ѵ�.

	cin.getline(name1, Size);
	//cin.get(name1, Size);
	// cin.getline : �����ִ� �͵� ����Ѵ�.

	cout << "��, " << name1 << "��, ����� �̸���";
	cout << strlen(name1) << "�� �Դϴٸ� \n";
	cout << sizeof(name1) << "����Ʈ ũ���� �迭�� ����Ǿ����ϴ�. \n";
	cout << "�̸��� " << name1[0] << "�ڷ� �����ϴ±���. \n";
	name2[3] = '\0';
	cout << "�� �̸��� ó�� �� ���ڴ� ������ �����ϴ�: ";
	cout << name2 << endl;

	cout << "  " << endl;

	// String

	// c ��Ÿ�� : string ��ü �ʱ�ȭ
	// cin : string ��ü�� �Է� ����
	// cout : ���

	char char1[20];
	char char2[20] = "jaguar";

	string str1;
	string str2 = "panda";

	//char1 = char2; Ʋ��
	str1 = str2;

	cout << str1[0] << endl;

	return 0;
}