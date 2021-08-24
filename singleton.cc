#include <iostream>
using namespace std;

class singleton
{
private:
	singleton(){};
	singleton (const singleton& temp) = delete;
	singleton& operator = (const singleton& temp) = delete;
public:
	~singleton(){};
	static singleton* getInstance()
	{
		static singleton instance;
		return &instance;
	}
	/*
	static singleton& getInstance()
	{
		static singleton instance;
		return instance;
	}
	*/
};

#include <mutex>
class singleton1
{
private:
	singleton1(){};
	singleton1 (const singleton1& temp) = delete;
	singleton1& operator = (const singleton1& temp) = delete;
public:
	~singleton1(){};
	static singleton1* m_Instance;
	static mutex mtx;
	static singleton1* getInstance()
	{
		if (m_Instance == nullptr)
		{
			unique_lock<mutex> ul(mtx);
			if (m_Instance == nullptr)
				m_Instance = new singleton1();
		}
		return m_Instance;
	}
};


singleton1* singleton1::m_Instance = new singleton1();
mutex singleton1::mtx;



int main()
{
	cout << singleton::getInstance() << endl;
	cout << singleton::getInstance() << endl;
	cout << singleton1::getInstance()<<endl;
	cout << singleton1::getInstance()<<endl;
}