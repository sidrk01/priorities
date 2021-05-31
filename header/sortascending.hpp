#ifndef __SORT_ASCENDING_HPP__
#define __SORT_ASCENDING_HPP__

#include "order.hpp"
#include <string>

class Sort_Ascending: public Order {
	
	public:
	Sort_Ascending(int userChoice, Strategy* taskInit);
	~Sort_Ascending();
	
	virtual bool organize();

	//helper functions 
	bool ascending_done();
	bool ascending_dow();
	bool ascending_title();
	bool ascending_id();
};		

#endif //__SORT_ASCENDING_HPP__
