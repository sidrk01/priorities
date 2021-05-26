#ifndef __ORDER_H__
#define __ORDER_H__

#include "strategy.hpp"
#include "iostream"

using namespace std;

class Order : public Strategy {
	private:
		
	public:
	virtual ~Order() = default;
	virtual bool organize(const Task* tasks) const = 0;		

}


#endif //__ORDER_H__
