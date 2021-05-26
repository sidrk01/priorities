#ifndef __ORDER_H__
#define __ORDER_H__

#include "strategy.hpp"
#include "iostream"

using namespace std;

class Order : public Strategy {
	private:
		
	public:
	virtual bool organize() const = 0;		

};


#endif //__ORDER_H__
