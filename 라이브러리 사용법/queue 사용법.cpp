//queue ����
//���̺귯�� �̸� queue
//�ð����⵵
//push O(1)
//pop O(1)
//front O(1)
//���� 
//10845
//1158

#include <queue>
using namespace std;

int main() {
	//����
	queue<int> q;

	//�ʱ�ȭ 
	q = queue<int>();

	//push 
	q.push(1);
	q.push(2);
	q.push(3);
	//q = {1,2,3}

	//pop
	int val = q.front(); q.pop();
	//val = 1;

	// ����ִ��� �˻�
	q.empty();
	//��������� true ��ȯ


	// ���� ����Ҷ�
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
	}

}
