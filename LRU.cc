#include <iostream>
#include <unordered_map>
using namespace std;

struct Dlist
{
	Dlist* prev;
	Dlist* next;
	int key, value;
	Dlist() : key(0), value(0), prev(nullptr), next(nullptr) {};
	Dlist(int k, int v) : key(k), value(v), prev(nullptr), next(nullptr) {};
};

class LRUCache {
public:
    LRUCache(int capacity) : m_capicity(capacity) {
		m_head = new Dlist();
		m_tail = new Dlist();
		m_head->next = m_tail;
		m_tail->prev = m_head;
		m_position.clear();
    }
    
    int get(int key) {
		if (m_position.count(key) == 0)
			return -1;

		Dlist* curNode = m_position[key];
		remove(curNode);
		insert(curNode);
		return curNode->value;
    }
    
    void put(int key, int value) {
		if (m_position.count(key) == 0)
		{
			Dlist* newNode = new Dlist(key, value);
			insert(newNode);
			m_position[key] = newNode;
			if (m_position.size() > m_capicity)
			{
				//淘汰旧的
				Dlist* last = m_tail->prev;
				remove(last);
				m_position.erase(last->key);
				delete last;
				last = nullptr;
			}
		}
		else
		{
			Dlist* targetNode = m_position[key];
			remove(targetNode);
			targetNode->value = value;
			insert(targetNode);
		}
    }
private:
	Dlist* m_head;
	Dlist* m_tail;
	unordered_map<int, Dlist*> m_position;
	int m_capicity;

	void insert(Dlist* node)
	{	
		node->prev = m_head;
		node->next = m_head->next;
		m_head->next->prev = node;
		m_head->next = node;
	}

	void remove(Dlist* node)
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
	}
};