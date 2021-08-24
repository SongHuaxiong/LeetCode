#include <iostream>
#include <queue>
#include <mutex>
#include <condition_variable>
using namespace std;
template<typename T>
class thread_safe_queue {
public:
	thread_safe_queue() {};
	~thread_safe_queue() {};

	void push(T temp) {
		unique_lock<mutex> ul(m_mtx);
		m_queue.push(move(temp));
		cout << "push!" << endl;
		m_not_empty_cv.notify_one();
	}

	void wait_and_pop() {
		unique_lock<mutex> ul(m_mtx);
		m_not_empty_cv.wait(ul, [this](){
			cout << "waiting until not empty" << endl;
			return !this->m_queue.empty();
		});
		m_queue.pop();
		cout << "pop!" << endl;
	}
	bool try_pop() {
		unique_lock<mutex> ul(m_mtx);
		if (m_queue.empty())
			return false;
		m_queue.pop();
		return true;
	}
	bool is_empty() {
		unique_lock<mutex> ul(m_mtx);
		return m_queue.empty();
	}

private:
	queue<T> m_queue;
	mutex m_mtx;
	condition_variable m_not_empty_cv;
};






//+--------------------测试代码-------------------+
/*
#include <iostream>
#include <thread>
#include "thread_safe_queue.cc"
using namespace std;

thread_safe_queue<int> test_queue;
void test_push() {
	for (int i = 0; i < 1000; i++)
		test_queue.push(i);
}

void test_pop() {
	for (int i = 0; i < 1000; i++)
		test_queue.wait_and_pop();
}

int main() {

	thread a(test_push), b(test_push), c(test_pop), d(test_pop);
	a.join();
	b.join();
	c.join();
	d.join();
}
*/
//+-------------------测试代码--------------------+