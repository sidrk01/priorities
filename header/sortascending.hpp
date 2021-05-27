#ifndef __SORT_ASCENDING_HPP__
#define __SORT_ASCENDING_HPP__

#include "order.hpp"

class Sort_Ascending: public Order {
	public:
	Strategy* item1;
	unsigned int i;
		
	void swap(int x, int y){
		Task* temp = nullptr;
		temp = item1->todo.at(x);
	//	delete xp;
		
		item1->todo.at(x) = item1->todo.at(y);
		item1->todo.at(y) = temp;

	//	delete temp;
		
	}
		
	bool ascending_done(){
		int i, j;
		for (i = 0; i < item1->todo.size() - 1; i++){
		
		for (j = 0; j < item1->todo.size() - i - 1; j++){
			if (item1->todo.at(j)->complete == false){
				swap(j, j + 1);
			}
		}
		}
	
	return true;		
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
