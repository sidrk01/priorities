#ifndef __SORT_RANDOM_HPP__
#define __SORT_RANDOM_HPP__

#include "order.hpp"
#include <algorithm>    
#include <vector>       
#include <ctime>        
#include <cstdlib>      
#include <string>


class Sort_Random: public Order {
	public:
	
	Sort_Random(int userOption, Strategy* Init);
 	~Sort_Random();
	// void swap(int x, int y){}
	bool sort_random();
        virtual bool organize();	

};
#endif//__SORT_RANDOM_HPP

