//unique ����
// �ð� ���⵵ O(?)
// ��� <algorithm>

#include <vector>
#include <algorithm>
using namespace std;

//unique(begin,end)
//begin ���� end ���� ���ӵǴ� �ߺ��Ȱ��� �����Ѵ�
//���� ���ĵȻ��¿��� �����ҿ� ���� �ߺ����� �ʰ� �ȴ�
int main() {
	vector<int> vi1({ 1,2,3,4,4,4,4,1,2,3,1,2 });
	vector<int> vi2({ 1,2,3,4,4,4,4,1,2,3,1,2 });

	vi1.erase(unique(vi1.begin(), vi1.end()), vi1.end());
	//vi1 = {1,2,3,4,1,2,3,1,2}

	sort(vi2.begin(), vi2.end());
	vi2.erase(unique(vi2.begin(), vi2.end()), vi2.end());
	//vi1 = {1,2,3,4}


	return 0;
}
