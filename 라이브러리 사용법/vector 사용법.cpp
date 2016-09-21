//vector ����
//���̺귯�� �̸� vector
//
//�ð� ���⵵
//push_back O(1)
//size O(1)
//���� O(1)
//

#include <vector>
using namespace std;

int main() {
	//����
	vector<int> vi;
	vector<long long> vll;
	
	//�ʱ�ȭ ���
	vi.clear();
	//��� vi = {}

	//Ư���� ���� ���̸� ������ �ʱ�ȭ 
	int n = 5;
	int val = -1;
	vi.assign(n,val);
	//��� vi = {-1,-1,-1,-1,-1}

	//���� 
	vi.push_back(1);
	vi.push_back(2);
	vi.push_back(3);
	// �����
	// vi = {-1,-1,-1,-1,-1,1,2,3}

	//���� 
	vi[1];
	//vi[1] -> -1

	//���� Ȯ��
	vi.size();
	//vi.size() -> 8

	//vector ���� ��� ���� ����
	for (int i = 0; i < vi.size(); i++) {
		vi[i];
	}

	//����
	vector<int> vi2;
	vi2 = vi;
}
