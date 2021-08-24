#include <algorithm>
#include "unlock_queue.h"

unlock_queue::unlock_queue(int size) : m_pBuffer(nullptr), m_Size(size), m_In(0), m_Out(0)
{
	if (!is_power_of_2(size))
	{
		m_Size = roundup_power_of_2(size);
	}
}

unlock_queue::~unlock_queue()
{
	if (m_pBuffer != nullptr)
	{
		delete[] m_pBuffer;
		m_pBuffer = nullptr;
	}
}

bool unlock_queue::initialize()
{
	m_pBuffer = new unsigned char[m_Size];
	if (!m_pBuffer)
		return false;
	m_In = m_Out = 0;
	return true;
}

unsigned long unlock_queue::roundup_power_of_2(unsigned long num)
{
	if (num & (num  - 1) == 0)
		return num;
	unsigned long temp = (unsigned long)((unsigned long)~0);
	unsigned long andv = ~(temp & (temp >> 1));
	while ((andv & num) == 0)
		andv = andv >> 1;
	return andv << 1;
}



unsigned int unlock_queue::put(const unsigned char* pBuffer, unsigned int len)
{
	unsigned int l;
	len = std::min(len, m_Size - m_In + m_Out);
	// 内存屏障
	__sync_synchronize();

	l = std::min(len, m_Size - (m_In & (m_Size - 1)));
	memcpy(m_pBuffer + (m_In & (m_In & (m_Size - 1)), pBuffer, l));
	memcpy(m_pBuffer, pBuffer + l, len - l);

	__sync_synchronize();

	m_In += len;
	return len;
}

unsigned int unlock_queue::get(const unsigned char* pBuffer, unsigned int len)
{
	unsigned int l;
	len = std::min(len, m_In - m_Out);
	// 内存屏障
	__sync_synchronize();

	l = std::min(len, m_Size - (m_Out & (m_Size - 1)));
	memcpy(pBuffer, m_pBuffer + (m_In & (m_Out & (m_Size - 1)), l));
	memcpy(pBuffer + l, m_pBuffer, len - l);

	__sync_synchronize();
	
	m_Out += len;
	return len;
}