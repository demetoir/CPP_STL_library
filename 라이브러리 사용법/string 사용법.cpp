//string ����
//
//��� string
//
//����
//1152
//10820
//10821
//2743
//10822
//10823
//10824
//

#include <string>
using namespace std;
int main() {
	//����
	string str1;
	string str2("1234");
	//str2 = "1234"
	char char_str[10] = "qwert";
	string str3(char_str);
	//str3 = "qwert"
	string str4('A', 3);
	//str4 = "AAA"
	string str5 = "asdf";
	//str5 = "asdf";

	//char�� ���ڿ� ��ȯ
	printf("%s\n",str5.c_str());

	//���ڿ� �����̱�
	string str6 = str2 + str3;
	//str6 = "1234qwert";
	str3 += str2; 
	//str3 = "qwert1234"

	//���ڿ��� ���ڷ� ��ȯ
	int number = stoi(str2);
	//number = 1234

	//���ڷ� ���ڿ��� ��ȯ
	long long long_number = 123455678901234;
	str1 = to_string(long_number);
	//str1 = "123455678901234";




	return 0;
}


