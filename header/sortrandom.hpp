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
	
	Sort_Random(int userChoice, Strategy* init){
		this->i = userChoice;
		this->item1 = init;
	}

	~Sort_Random(){
	}
	virtual void swap(int x, int y){}

	void swap_two(int x, int y) { 
		srand(unsigned(time(NULL)));
		Task* temp = nullptr; 
		temp = item1->todo.at(x); 

		if (rand() % 100 + 1 <= 50) {
			item1->todo.at(x) = item1->todo.at(y); 
			item1->todo.at(y) = temp;
		}
		else {	
		//	item1->todo.at(x);
		//	item1->todo.at(y);

		}

	}

	virtual bool organize(){
		int i, j;
		for (i = 0; i < item1->todo.size() - 1; i++){
		
		for (j = 0; j < item1->todo.size() - i - 1; j++){
			if (item1->todo.at(j)->complete == false){
				swap_two(j, j + 1);
			}
		}
		}
	return true;
	}



#endif//__SORT_RANDOM_HPP

