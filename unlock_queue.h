#ifndef _UNLOCK_QUEUE_H
#define _UNLOCK_QUEUE_H

class unlock_queue
{
private:
	unsigned char* m_pBuffer;
	unsigned int m_Size;
	unsigned int m_In;
	unsigned int m_Out;
	inline bool is_power_of_2(unsigned int num) {return (num != 0 && num & (num - 1) == 0);}
	unsigned long roundup_power_of_2(unsigned long num);
	
public:
	unlock_queue(int size);
	virtual ~unlock_queue();
	bool initialize();
	unsigned int put(const unsigned char* pBuffer, unsigned int len);
	unsigned int get(const unsigned char* pBuffer, unsigned int len);
	inline void clean() {m_In = m_Out = 0;}
	inline unsigned int get_data_length() const {return m_Out - m_In;}
};





#endif