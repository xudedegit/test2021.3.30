#include <iostream>
using namespace std;
class Cpu
{
public:
	virtual void calculate() = 0;
};
class Videocard
{
public:
	virtual void show() = 0;

};
class Memory
{
public:
	virtual void storage() = 0;
};

class IntelCpu :public Cpu
{
public:
	virtual void calculate()
	{
		cout << "IntelCpu working" << endl;
	}
};
class IntelVideocard :public Videocard
{
public:
	virtual void show()
	{
		cout << "IntelVideocard working" << endl;
	}
};
class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "IntelMemory working" << endl;
	}

};
class LenovoCpu :public Cpu
{
public:
	virtual void calculate()
	{
		cout << "LenoveCpu working" << endl;
	}
};
class LenovoVideocard :public Videocard
{
public:
	virtual void show()
	{
		cout << "LenovoVideocard working" << endl;
	}
};
class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "LenovoMemory working" << endl;
	}
};
class Computer
{
public:
	Computer(Cpu *cpu,Videocard *videocard,Memory *memory)
	{
		m_Cpu = cpu;
		m_Videocard = videocard;
		m_Memory = memory;
	}
	 void work()
	{
		m_Cpu->calculate();
		m_Videocard->show();
		m_Memory->storage();
	}
	 ~Computer()
	 {
		 cout << "ComputerÎö¹¹µ÷ÓÃ" << endl;
		 if (m_Cpu != NULL)
		 {
			 delete m_Cpu;
			 m_Cpu = NULL;
		 }
		 if (m_Videocard != NULL)
		 {
			 delete m_Videocard;
			 m_Videocard = NULL;
		 }
		 if (m_Memory != NULL)
		 {
			 delete m_Memory;
			 m_Memory = NULL;
		 }
	 }
private:
	Cpu *m_Cpu;
	Videocard* m_Videocard;
	Memory* m_Memory;

};
void test01()
{
	Cpu* cpu = new IntelCpu;
	Videocard* vc = new IntelVideocard;
	Memory* mem = new IntelMemory;
	Computer* computer1 = new Computer(cpu,vc,mem);
	computer1->work();
	delete computer1;
	cout << "----------------" << endl;
	Computer* computer2 = new Computer(new LenovoCpu, new LenovoVideocard, new LenovoMemory);
	computer2->work();
	delete computer2;
	cout << "------------------" << endl;
	Computer* computer3 = new Computer(new IntelCpu, new IntelVideocard, new LenovoMemory);
	computer3->work();
	delete computer3;
}
int main()
{
	test01();
	system("pause");
	return 0;
}