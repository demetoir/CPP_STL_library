//rotate ����
// �ð� ���⵵ O(n)
// ��� <algorithm>
//���� ���� ������ ������������ ȸ�� ��Ų��
//���� 10812
#include <vector>
#include <algorithm>
using namespace std;

//rotate(begin,mid,end)
//begin ���� end ����  mid �������� �������� ȸ���Ѵ�
int main() {
	vector<int> vi({ 1,2,3,4,5 });

	//vi = {1,2,3,4,5}
	rotate(vi.begin(), vi.begin()+2,vi.end());
	//vi = {3,4,5,1,2}

	return 0;
}
