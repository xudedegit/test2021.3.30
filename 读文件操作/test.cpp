#include <iostream>
using namespace std;
#include <fstream>

void test01()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);  // ���ļ�

	if (!ifs.is_open())
	{
		cout << "�ļ���ȡʧ��" << endl;
		return;
	}

	char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}
	ifs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}