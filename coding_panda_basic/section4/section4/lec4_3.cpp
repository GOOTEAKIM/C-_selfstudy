// while ������ do while ����

#include <iostream>

using namespace std;

int main() {

	// while��, do while ��

	int i = 0;

	while (i < 3) {
		cout << i << endl;
		i++;
	}
	
	cout << " " << endl;

	string animal = "Panda";

	int j = 0;

	while (animal[j] != '\0') {

		cout << animal[j] << endl;
		j++;
	}

	// while ��
	int k = 0;

	while (k < 3) {
		cout << "while �� �Դϴ�. \n";
		k++;
	}

	// do, while ��
	
	int f = 0;

	do {
		cout << "do, while ���Դϴ�. \n";
		f++;
	} while (f < 3);

	return 0;
}