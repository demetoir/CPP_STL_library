//find ����
// �ð� ���⵵ O(n)
// ��� <algorithm>
//�������� ������ value �� ������ ã�´�

//����
// 10809
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int result;
int main() {
	int A[10] = { 1,1,1,2,3,5,5,5,7,8 };

	int val = 5;
	for (int i = 0; i < 10; i++) {
		auto it = find(A, A + 10, i);
		cout << i << "�� ��ġ : ";
		if (it == A + 10)
			cout << "ã�� �� ����";
		else {
			cout << (it - A);
		}
		cout << endl;
	}

	return 0;
}











