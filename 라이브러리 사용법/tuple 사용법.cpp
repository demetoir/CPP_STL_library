// tuple ����
// ��� tuple
//
#include <tuple>
#include <iostream>
using namespace std;
int main() {
	//����
	tuple<int, int, int> tupleiii = make_tuple(3,2,1);

	//����
	cout << get<0>(tupleiii) << endl;
	cout << get<0>(tupleiii) << endl;
	cout << get<0>(tupleiii) << endl;

	//get���� ������ ����
	//�̰� ���ٿ��� ����ü ����°� ������
	return  0;
}