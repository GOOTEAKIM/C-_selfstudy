#include <iostream>

using namespace std;

int main() {

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