// stl count ����
// �ð� ���⵵ O(n)

// ��� <algorithm>
//
//���������� ���� �� ���ϴ� ���� ������ ã�´�
//
//���� 
//10807
//10808

#include <algorithm>
#include <vector>

using namespace std;
int result;
int main() {
	int A[10] = { 1,1,1,2,3,5,5,5,7,8 };
	
	int val = 5;
	result = count(A, A + 10, val);
	//result == 3

	vector< int> vi({ 1,1,1,2,3,5,5,5,7,8 });

	val = 1;
	result = count(vi.begin(), vi.end(), val);
	//result == 3

	return 0;
}








