//stack ����
//���̺귯�� �̸� stack
//�ð����⵵
//push O(1)
//pop O(1)
//top O(1)
//����
//10828

#include <stack>
using namespace std;

int main() {
	//����
	stack<int> st;

	//�ʱ�ȭ 
	st = stack<int>();

	//push 
	st.push(1);
	st.push(2);
	st.push(3);
	//st = {1,2,3}

	//pop()
	int val = st.top(); st.pop();
	//val = 3

	// ����ִ��� �˻�
	st.empty();
	//��������� true ��ȯ


	// ���� ����Ҷ�
	while (!st.empty()) {
		int cur = st.top();
		st.pop();
	}

}
