#include <iostream>
#include <algorithm>
using namespace std;

//涉及指针，默认拷贝会调用浅拷贝，存在内存泄漏的问题
class Student
{
private: 
	int num; 
	char *name; 
public: 
	Student()
	{
		name = new char(20);
		cout << "Student" << endl;
	}
	~Student()
	{
		cout << "~Student " << name << endl; 
		delete name; name = NULL;
	}
};



int main()
{
	Student s1;
	Student s2(s1);//Student s2 = s1;//复制对象 return 0;
}