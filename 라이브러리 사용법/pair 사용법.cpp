//pair ����
//���̺귯�� �̸� utility

#include <utility> 
#include <vector>
#include <queue>
using namespace std;
#define pii pair<int,int>

int main() {
	//����
	pair<int, int> p1;
	pii p2;
	pair<int, double> p3;

	//�ʱ�ȭ
	p1 = pair<int, int>(0, 0);
	p1 = pii(0, 0);
	p1 = make_pair(0, 0);
	//��� ���� �ǹ�

	//���� pair ����
	pair<int, pair<int, int> > triple1;

	//������
	p1.first = 1;
	p1.second = 2;
	//p1 ->(1,2)

	//vector �� �Բ� ���
	//����
	vector< pair<int, int> > pair_vector;
	vector< pii > pair_vector_macro;

	//����
	pair_vector.push_back(p1);
	pair_vector.push_back(pii(0, 1));
	pair_vector.push_back(pair<int,int>(3,4));
	//pair = {(1,2),(0,1),(3,4)}

	//���� 
	pair_vector[1];
	//pair_vector[1] -> (0,1)
	pair_vector[1].first;
	//pair_vector[1].first -> 0
	pair_vector[1].second;
	//pair_vector[1].second -> 1


	//queue ���� pair ���
	//����
	queue<pair<int, int> > q;
	queue< pii > q_macro;
	
	//push
	q.push(pair<int, int>(1, 2));
	q.push(pii(3, 4));
	q.push(make_pair(5, 6));

	//pop
	pii temp = q.front(); q.pop();



}