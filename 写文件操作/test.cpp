#include <iostream>
using namespace std;
#include <fstream>

void test01()
{

	fstream ofs;
	ofs.open("test.txt", ios::out);
	ofs << "姓名：王小帅" << endl;
	ofs << "性别： 女" << endl;
	ofs << "身高： 175" << endl;

	ofs.close();

}
int main()
{
	test01();
	system("pause");
	return 0;
}