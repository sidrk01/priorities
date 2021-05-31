#ifndef __SORT_DESCENDING_HPP__
#define __SORT_DESCENDING_HPP__

#include "order.hpp"
#include "strategy.hpp"
#include <string>

class Sort_Descending: public Order {
	public: 
	Strategy* item2; 
	unsigned int j; 

	void swap_two(int x, int y){
		Task* temp = nullptr;
		temp = item2->todo.at(x);

		item2->todo.at(x) = item2->todo.at(y);
		item2->todo.at(y) = temp;
	}


	bool descending_done(){
		int i, j;
		for (i = 0; i < item2->todo.size() - 1; i++){
		
		for (j = 0; j < item2->todo.size() - i - 1; j++){
			if (item2->todo.at(j)->complete == true){
				swap_two(j, j + 1);
			}
		}
	}
	return true;
	}


	bool descending_dow(){
		int i, j;
                for (i = 0; i < item2->todo.size() - 1; i++){

                for (j = 0; j < item2->todo.size() - i - 1; j++) { 
                        if ((item2->todo.at(j)->daysOfWeek).length() <  (item2->todo.at(j+1)->daysOfWeek).length()){
                                swap_two(j, j + 1);
                        }
                }
        }

        return true;		
	}


	bool descending_id(){
		int i, j;
		for (i = 0; i < item2->todo.size() - 1; i++){
                for (j = 0; j < item2->todo.size() - i - 1; j++){
                        if (item2->todo.at(j)->id < item2->todo.at(j+1)->id){
                                swap_two(j, j + 1);
                        }
                }
        }
	
	return true;
	}


	 bool descending_title(){
                int i, j, k;
                unsigned int l1, l2;
                unsigned char tmp1, tmp2;
                unsigned int inc = 0;
                for (i = 0; i < item2->todo.size() - 1; i++){

                for (j = 0; j < item2->todo.size() - i - 1; j++){
                        for (k = 0; k < (item2->todo.at(j)->title).length(); k++){
                        tmp1 = (item2->todo.at(j)->title).at(k);
                        tmp2 = (item2->todo.at(j + 1)->title).at(k);
                        if (tmp1 < tmp2){
                        inc++;
                        }
                        if (inc != 0){
                        swap_two(j, j + 1);
                        inc = 0;
                        }
                	}
		}	
		}		

        return true;
        }
	
	Sort_Descending(unsigned int userC, Strategy* taskIn){
                j = userC;
                item2 = taskIn;
        }

        ~Sort_Descending() {
        }
	
	virtual bool organize() {
		bool func_compl = false;
	if (j == 1)	
		func_compl = descending_done();
 	if (j == 2)
		func_compl = descending_dow();
	if (j == 3)
		func_compl = descending_title();
	if (j == 4)
		func_compl = descending_id();

	return func_compl;
	}
};

#endif //__SORT_DESCENDING_HPP__

