#ifndef __ORDER_H__
#define __ORDER_H__

#include "iostream"
#include "task.hpp"

using namespace std;

class Order {
	public:
	virtual bool organize() = 0;		
	~Order() = default;
};


#endif //__ORDER_H__
