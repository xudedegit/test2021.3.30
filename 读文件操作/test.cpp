#include <iostream>
using namespace std;
#include <fstream>

void test01()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);  // 读文件

	if (!ifs.is_open())
	{
		cout << "文件读取失败" << endl;
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