//lowerbound ����
//�ð� ���⵵ O(log(n))
//
//��������
//ã���� �ϴ� �迭�� �̸� ������������ ���� �Ǿ���Ѵ�
//
//���� ����
//ã�� ���� ���� ���� �������� ������ �����ҋ��� ���ܸ� �����Ѵ�
//
//���Ҹ� ���������� ���Ļ��°� ������ ���� ��ġ�� ���� ���� ��ġ�� ��ȯ�Ѵ�
//
//
//����
//10815
//
//
#include <vector>
#include <algorithm>
#include <utility>
#include <functional>
using namespace std;

int main() {
	//�Ϲ� �迭 ����
	int A[10] = { 1,2,2,2,5,7,7,7,10,20 };

	sort(A, A + 10);
	//A={1,2,2,2,5,7,7,7,10,20}

	//ã�����ϴ� ��
	int val = 5;

	//ã�����ϴ°��� ��Ÿ���� ù���� index ��ȯ
	int index = lower_bound(A, A + 10, val) - A;
	// index -> 4

	//ã�����ϴ°��� �ٷ� ����
	int *temp = lower_bound(A, A + 10, val);
	//*temp -> 3

	//ã�� ���� ������
	val = -1;
	index = lower_bound(A, A + 10, val) - A;
	//index = 0

	val = 4;
	index = lower_bound(A, A + 10, val) - A;
	//index = 4

	val = 45;
	index = lower_bound(A, A + 10, val) - A;
	//index = 10
	//�̋� �迭�� ������ ����� ������ �����Ѵ� 

	//ã�� ���� �������ϋ�
	val = 2;
	index = lower_bound(A, A + 10, val) - A;
	//index = 1
	//ã�� ���� �������ϋ� �迭�󿡼� �� ���� ���� ���� ��ġ�� ��ȯ�Ѵ�
	//��������ġ�� ����ϰ� �������� upper_bound �� ����Ѵ�

	//vecter ����
	vector<int> vi;
	vi.push_back(2);
	vi.push_back(6);
	vi.push_back(4);
	vi.push_back(3);
	vi.push_back(2);
	vi.push_back(1);
	vi.push_back(5);
	vi.push_back(3);
	vi.push_back(2);
	vi.push_back(5);
	//vi = { 2,6,4,3,2,1,5,3,2,5 };


	//ã�����ϴ� ��
	val = 3;

	//ã�����ϴ°��� ��Ÿ���� ù���� index ��ȯ
	index = lower_bound(vi.begin(), vi.end(), val) - vi.begin();
	// index -> 4

	//ã�����ϴ°��� �ٷ� ����
	vector<int>::iterator iter = lower_bound(vi.begin(), vi.end(), val);
	printf("%d\n", *iter);
	//*iter -> 3



	return 0;
}