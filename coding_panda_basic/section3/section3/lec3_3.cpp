// lec 11. ����ü

#include <iostream>
#include <cstring>
using namespace std;

int main() {

	// ����ü : �ٸ� ���������� ���Ǵ� �������� ����

	// �迭 : ���� ���������� ����

	// �౸����
	struct MyStruct
	{
		string name;
		string position;
		int height;
		int weight;
	} B;

	// ���� ��Ұ� ����

	MyStruct A = {
		"gootea",
		"FW",
		172,
		78
	};

	cout << A.name << endl;
	cout << A.position << endl;
	cout << A.height << endl;
	cout << A.weight << endl;

	B = {

	};

	cout << B.height << endl;

	MyStruct C[2] = {
		{"A", "A", 10, 1},
		{"B", "B", 20, 2}
	};

	cout << C[0].height << endl;
	cout << C[1].weight << endl;

	return 0;
}