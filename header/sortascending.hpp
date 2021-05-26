#ifndef __SORT_ASCENDING_HPP__
#define __SORT_ASCENDING_HPP__

#include "order.hpp"

class Sort_Ascending: public Order {
	public:
	Strategy* item1;
	unsigned int i;
		
	void swap(Task* xp, Task* yp){
		Task* temp = nullptr;
		temp = xp;
		delete xp;
		
		xp = yp;
		yp = temp;

		delete temp;
		
	}
		
	bool ascending_done(){
		int i, j;
		for (i = 0; i < item1->todo.size() - 1; i++){
		
		for (j = 0; j < item1->todo.size() - i - 1; j++){
			if (item1->todo.at(j)->complete == false){
				swap(item1->todo.at(j), item1->todo.at(j + 1));
			}
		}
		}		
	}
	
	bool ascending_dow(){
		
	}

	bool ascending_title(){
	
	}
		
	bool ascending_id(){
	
	}
	
	Sort_Ascending(vector<bool>userChoice, Strategy* taskInit){
		i = 0;	
		while (!userChoice.at(i)){
		i++;			
		}
		item1 = taskInit;
	}


	~Sort_Ascending (){
		//delete item1;			
	}

	virtual bool organize() {
	   if(i == 0){
		return ascending_done();			
	   }			
	}

	
};

#endif //__SORT_ASCENDING_HPP__
