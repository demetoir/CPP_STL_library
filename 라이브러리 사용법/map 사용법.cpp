//map ����
//���̺귯�� : map
//
//�ð� ���⵵
//�߰� O(log(n))
//���� O(log(n))
//���� O(log(n))
//���� O(log(n))
//���� 
//1076
//1764
//
#include <map>
using namespace std;

int main() {
	//����
	map<int, int> mii;
	map<int, long long> mill;
	//map<key,value>
	

	//�ʱ�ȭ
	mii.clear();
	mii = map<int, int>();

	//�߰� �� ����
	mii[3] = 10;
	mii[1] = 20;
	mii[2] = 30;
	mii[4] = 40;

	//����
	//mii.erase(key_value);
	
	//����
	mii[3];
	//mii[3] = 10
	


}