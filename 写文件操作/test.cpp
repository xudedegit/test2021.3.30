#include <iostream>
using namespace std;
#include <fstream>

void test01()
{

	fstream ofs;
	ofs.open("test.txt", ios::out);
	ofs << "��������С˧" << endl;
	ofs << "�Ա� Ů" << endl;
	ofs << "��ߣ� 175" << endl;

	ofs.close();

}
int main()
{
	test01();
	system("pause");
	return 0;
}