#include <atomic>
using namespace std;

class spin_lock {
private:
	atomic<bool> flag{false}; //false不加锁、true加锁
public:
	spin_lock() = default;
	spin_lock(const spin_lock&) = delete;
	spin_lock& operator=(const spin_lock&) = delete;
	void lock() {
		bool expected = false;
		while (!flag.compare_exchange_strong(expected, true))
			expected = false;
	}
	void unlock() {
		flag.store(false);
	}
};