//fill ����
// �ð� ���⵵ O(n)
// ��� <algorithm>
//�������� ��� ���Ҹ� value �� �ٲ۴�
//����
//10810
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int result;
int main() {
	int A[10] = { 1,1,1,2,3,5,5,5,7,8 };

	int start = 3;
	int end = 7;

	fill(A + 3, A + 7, 0);

	//A = { 1,1,1,0,0,0,0,5,5,7,8 };

	return 0;
}











