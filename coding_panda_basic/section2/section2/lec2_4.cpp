#include <iostream>
using namespace std;

int main() {
    //���
    // 1. �ٲ� �ʿ䰡 ���� ��
    // 2. ����� �ȵǴ� ��

    const float PIE = 3.1415926535;

    int r = 3;
    float s = r * r * PIE;

    //�������� ��ȯ
    /*
    1. Ư�� ���������� ������ �ٸ� ���������� ���� �������� ��
    2. ���Ŀ� ���������� ȥ���Ͽ� ������� ��
    3. �Լ��� �Ű������� ������ ��
    */

    int a = 3.141592;
    cout << a << endl;

    // ���������� �������� ��ȯ
    // typeName(a), (typeName)a
 
    char ch = 'M';
    cout << (int)ch << " " << int(ch) << endl;
    cout << static_cast<int>(ch) << endl;

    // static_cast<typeName>
}