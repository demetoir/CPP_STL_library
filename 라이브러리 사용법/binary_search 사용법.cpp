//binary_search ����
//
//�ð����⵵ O(log(n))
//
//�ش� algorithm
//
//
//binary_search(begin,end,value)
//[begin ���� end) ���� value������ true ������ false
//����
//10815
//
//
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int>vi({ 1,2,3,4,6,7,8});

	bool isfind = false;
	int val = 3;
	isfind = binary_search(vi.begin(), vi.end(), val);
	//isfind = true


	val = 5;
	isfind = binary_search(vi.begin(), vi.end(), val);
	//isfind = false
	return 0;
}






