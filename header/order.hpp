#ifndef __ORDER_H__
#define __ORDER_H__

#include "iostream"
#include "task.hpp"
#include "strategy.hpp"

using namespace std;

class Sort_Descending;

class Order {
	public:
	unsigned int i;
	Strategy* item1;
	
	virtual void swap(int x, int y){
	        Task* temp = nullptr;
                temp = item1->todo.at(x);
        
                item1->todo.at(x) = item1->todo.at(y);
                item1->todo.at(y) = temp;
	}
	virtual bool organize() = 0;		
	~Order() = default;
};


#endif //__ORDER_H__
