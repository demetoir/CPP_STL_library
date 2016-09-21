//priority_queue 
//���̺귯�� �̸� queue
//
//default�� ���������̴�
//
//�ð����⵵
//push O(lg(n))
//pop O(lg(n))
//top O(1)
//
//
//
//���� �ڷ�
//http://koosaga.myungwoo.kr/entry/STL-priority-queue-%ED%99%9C%EC%9A%A9%EB%B2%95
//
//����
//1927
//
#include <queue>
#include <functional>
using namespace std;
#define pii pair<int,int>

struct triple {
	int a, b, c;
};

//����ü ���ÿ��� ������ �����ε��� �̿��Ѵ�
//������ �����ε��� < �̰͸� �ȴ� > �̰��� priority_queue ���� �ν� ���Ѵ�
bool operator <(triple a, triple b) {
	//��������
	return a.a < b.a;

	//��������
	//return a.a > b.a;
}

int main() {
	//����
	priority_queue<int>pq;
	priority_queue<pii>pq_pair_macro;
	priority_queue<triple>pq_triple_struct;

	//�ʱ�ȭ
	pq = priority_queue<int>();

	//push
	pq.push(4);
	pq.push(3);
	pq.push(2);
	pq.push(1);
	//pq = {4,3,2,1}

	//pop
	int val = pq.top();
	pq.pop();
	//val -> 4
	//pq = {3,2,1}

	//������������ priority_queue ����ϱ�

	//greater�� ����ؼ� �������� �ϱ�
	priority_queue<int,vector<int>, greater<int> > pq_greater;
	//priority_queue<T,vector<T>, less<T> > pq;


	//������ �״�� �ϰ� ���Ұ��� ��ȣ�� �ٲپ� �����
	priority_queue<int>pq_invese;

	//push
	val = 5;
	pq_invese.push(-val);

	//pop
	int temp = -pq.top(); 
	pq_invese.pop();
	
	//pair �� �̿��� priority_queue ����ϴ� ���
	priority_queue<pii> pq_pair;

	//push
	pq_pair.push(pii(4, 1));
	pq_pair.push(pii(3, 1));
	pq_pair.push(pii(1, 3));
	pq_pair.push(pii(1, 1));
	pq_pair.push(pii(2, 2));
	pq_pair.push(pii(2, 3));
	//pq ={(4,1),(3,1),(2,3),(2,2),(1,3),(1,1)}	
	
	//pop
	pii temp_pair = pq_pair.top(); pq_pair.pop();
	//temp_pair -> (4,1)

}