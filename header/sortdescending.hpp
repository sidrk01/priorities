#ifndef __SORT_DESCENDING_HPP__
#define __SORT_DESCENDING_HPP__

#include "order.hpp"
#include <string>

class Sort_Descending : public Order {
	public: 
	Strategy* item1; 
	unsigned int i; 

	void swap_two(int x, int y){
		Task* temp = nullptr;
		temp = item1->todo.at(x);

		item1->todo.at(x) = item1->todo.at(y);
		item1->todo.at(y) = temp;
	}


	Sort_Descending(int userChoice, Strategy* taskInit){
		i = userChoice;
		item1 = taskInit;
	}

	~Sort_Descending() {
	}

	bool descending_done(){
		int i, j;
		for (i = 0; i < item1->todo.size() - 1; i++){
		
		for (j = 0; j < item1->todo.size() - i - 1; j++){
			if (item1->todo.at(j)->complete == true){
				swap_two(j, j + 1);
			}
		}
	}
	return true;
	}


	bool descending_dow(){
		int i, j;
                for (i = 0; i < item1->todo.size() - 1; i++){

                for (j = 0; j < item1->todo.size() - i - 1; j++) { 
                        if ((item1->todo.at(j)->daysOfWeek).length() <  (item1->todo.at(j+1)->daysOfWeek).length()){
                                swap_two(j, j + 1);
                        }
                }
        }

        return true;		
	}

	bool descending_title(){
                int i, j;
                for (i = 0; i < item1->todo.size() - 1; i++){

                for (j = 0; j < item1->todo.size() - i - 1; j++){
			char tmp1 = (item1->todo.at(j)->title).at(0);
			char tmp2 = (item1->todo.at(j + 1)->title).at(0);
			if (tmp1 >  tmp2)
			 swap_two(j, j + 1);
			}
		}        
               

        return true;
	}

	bool descending_id(){
		int i, j;
		for (i = 0; i < item1->todo.size() - 1; i++){
                for (j = 0; j < item1->todo.size() - i - 1; j++){
                        if (item1->todo.at(j)->id < item1->todo.at(j+1)->id){
                                swap_two(j, j + 1);
                        }
                }
        }
	
	return true;
	}
	}

	virtual bool organize() {
		bool func_compl = false;
	switch (i){
		case 1:
		func_compl = descending_complete();
		break;

		case 2:	
		func_compl = descending_dow();
		break;

		case 3:
		func_compl = descending_title();
		break;

		case 4:
		func_compl = descending_id();
		break;
	}

	return func_compl;
	}
};

#endif //__SORT_DESCENDING_HPP__

