//sort ����
//���̺귯�� : algorithm
//defualt�� �������� ����
//�ð����⵵ O(nlog(n))
//���� 
//
//2750
//1181
//11650
//11651
//10825
//10814

#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

int main() {
	// �Ϲ� �迭 sort
	int A[5] = {3,4,2,1,3};
	sort(A, A + 5);

	//sort(A, A + A�� ����) 
	//��� A = {1,2,3,3,4}

	// vector sort
	vector<int> vi;
	vi.push_back(3);
	vi.push_back(4);
	vi.push_back(2);
	vi.push_back(1);
	vi.push_back(3);

	sort(vi.begin(), vi.end());
	//��� vi = {1,2,3,3,4}

	//������������ ����
	sort(A, A+5, greater<int>());
	//��� vi = {4,3,3,2,1}

	sort(vi.begin(), vi.end(), greater<int>());
	//��� vi = {4,3,3,2,1}

}


