## 线程安全的饿汉式
```C++
#include <iostream>
//#include <mutex>
using namespace std;
//mutex mtx;
class single
{
public:
    static single* getInstance()
    {
       if (m_Instance == nullptr)
       {
            //mtx.lock();
           pthread_mutex_lock(&mutex);
            if (m_Instance == nullptr)
            {
                m_Instance = new single();
            }
           // mtx.unlock();
           pthread_mutex_unlock(&mutex);
       }
        cout << m_Instance << endl;
        return m_Instance;
    }
    static void destroy()
    {
        delete m_Instance;
        m_Instance = nullptr;
    }
private:
     single(){
         pthread_mutex_init(&mutex, nullptr);
     }
    ~single(){}
    static single* m_Instance;
    static pthread_mutex_t mutex;
};
single* single::m_Instance = nullptr;
pthread_mutex_t single::mutex;

int main() {
    single::getInstance();
    single::getInstance();
    single::getInstance();
    cout << "Hello World!" << endl;
}

```

## 饿汉式
```C++
class Singleton{
private:
    Singleton(){}
    static Singleton* m_Instacne;
public:
    static Singleton* getInstance()
    {
        return m_Instance;
    }
};
Singleton* Singleton::m_Instance = new Singleton();
```