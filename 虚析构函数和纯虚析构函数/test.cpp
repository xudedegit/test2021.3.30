#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
	Animal()
	{
		cout << "Animal���캯������" << endl;
	}
	virtual void speak() = 0;
	 /*~Animal()
	{
		cout << "Animal������������" << endl;
	
	}*/

	virtual ~Animal() = 0;     //���˴�����������֮�󣬸������ڳ����࣬�޷�ʵ��������
};
Animal::~Animal()
{
	cout << "Animal����������������" << endl;
}
class Cat:public Animal
{

public:

	Cat(string name)
	{
		cout << "Cat���캯������" << endl;
		m_Name = new string(name);
	}

	virtual void speak()
	{
		cout << *m_Name<<"Сè��˵��" << endl;
	}
	~Cat()
	{
		cout << "Cat������������" << endl;
		if (m_Name != NULL)
		{
			delete m_Name;
			m_Name = NULL;
		}
	}
private:
	string* m_Name;
};
void test01()
{
	Animal* animal = new Cat("Tom");

	animal->speak();
	delete animal;
}
int main()
{
	test01();

	system("pause");
	return 0;
}
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base���캯������" << endl;
//	}
//	~Base()
//	{
//		cout << "Base������������" << endl;
//	}
//		
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son���캯������" << endl;
//	}
//	~Son()
//	{
//
//		cout << "Son������������" << endl;
//	}
//};
//void test02()
//{
//	Son s1;
//}
//int main()
//{
//	test02();
//
//
//	system("pause");
//	return 0;
//}