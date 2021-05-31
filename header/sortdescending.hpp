#ifndef __SORT_DESCENDING_HPP__
#define __SORT_DESCENDING_HPP__

#include "order.hpp"
#include <string>

class Sort_Descending: public Order {
	public: 
	
	Sort_Descending(int userChoice, Strategy* taskInit);
	~Sort_Descending();
	virtual bool organize();
	
	//helper functions
	bool descending_done();
	bool descending_dow();
	bool descending_id();
	bool descending_title();
	
};
#endif //__SORT_DESCENDING_HPP__

