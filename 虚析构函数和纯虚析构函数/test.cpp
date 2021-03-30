#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
	Animal()
	{
		cout << "Animal构造函数调用" << endl;
	}
	virtual void speak() = 0;
	 /*~Animal()
	{
		cout << "Animal析构函数调用" << endl;
	
	}*/

	virtual ~Animal() = 0;     //有了纯虚析构函数之后，该类属于抽象类，无法实例化对象
};
Animal::~Animal()
{
	cout << "Animal纯虚析构函数调用" << endl;
}
class Cat:public Animal
{

public:

	Cat(string name)
	{
		cout << "Cat构造函数调用" << endl;
		m_Name = new string(name);
	}

	virtual void speak()
	{
		cout << *m_Name<<"小猫在说话" << endl;
	}
	~Cat()
	{
		cout << "Cat析构函数调用" << endl;
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
//		cout << "Base构造函数调用" << endl;
//	}
//	~Base()
//	{
//		cout << "Base析构函数调用" << endl;
//	}
//		
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son构造函数调用" << endl;
//	}
//	~Son()
//	{
//
//		cout << "Son析构函数调用" << endl;
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