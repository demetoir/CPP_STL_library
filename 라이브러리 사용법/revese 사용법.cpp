//reverse ����
// �ð� ���⵵ O(n)
// ��� <algorithm>
//���� ���� ������ ������ �������� �����
//����
//10811
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> vi({ 1,2,3,4,5 });

	//vi = {1,2,3,4,5}
	reverse(vi.begin(), vi.end());
	//vi = {5,4,3,2,1}

	return 0;
}
