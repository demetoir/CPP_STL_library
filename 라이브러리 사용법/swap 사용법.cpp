//swap ����
// �ð� ���⵵ O(1)
// ��� <algorithm>
//�� ���� �ٲ۴�
//����
//10813
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int x = 5, y = 87;
	//x == 5, y==87
	swap(x, y);
	//x == 87, y==5

	vector<int>a({ 1,2,3 });
	vector<int>b({ 5,6,7,8 });

	//a = {1,2,3}, b = {5,6,7,8}
	swap(a, b);
	//a = {5,6,7,8}, b = {1,2,3} 

	return 0;
}
