//set ����
//
//��� set

//���� 
//�ߺ� ���� �����ϱ� 10867
//10815
//10816


#include <set>
using namespace std;

int main() {
	//����
	set<int> seti;

	//����
	seti.insert(1);
	seti.insert(2);
	seti.insert(3);
	seti.insert(4);
	//set  = {1,2,3,4}

	//�����ϸ鼭 �̹� �ִ� �������� Ȯ���ϱ�
	auto result = seti.insert(7);
	//result = pair(7,true)
	auto result = seti.insert(3);
	//result = pair(3,false)

	//�����ϱ�
	seti.erase(3);
	//seti = {1,2,4,7}
	seti.erase(seti.begin());
	//seti = {2,4,7}

	//ũ�� 
	seti.size();
	// seti.size() == 4

	//��ġ ã��









	return  0;
}
