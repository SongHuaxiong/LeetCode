#include <iostream>
using namespace std;

class A {
};

class B {
	int a;
	char* p;
};

class C {
public:
	C(){}
	virtual ~C(){}
private:
	int a;
	char* p;
};

class CChild : C {
public:
	CChild(){}
	virtual ~CChild(){}
private:
	int c;
};

class D {
	virtual void funA(){}
	virtual void funB(){}
};

int main () {
	A* a1 = new A();
	A* a2 = new A();
	cout << sizeof A() << endl; // 1  大小为1方便地址分配 栈向下增长，堆向上
	cout << &a1 << "," << &a2 << endl; // 0x7ffef12ba0b8,0x7ffef12ba0b0
	cout << a1 << "," << a2 << endl; // 0x2170c20,0x2170c40
	cout << sizeof B() << endl; // 16 字节对齐
	cout << sizeof C() << endl; // 24 字节对齐 + 虚指针
	cout << sizeof CChild() << endl; // 24 父类 + 子类成员（字节对齐）
	cout << sizeof D() << endl; // 8 多个虚函数等于一个虚函数
}