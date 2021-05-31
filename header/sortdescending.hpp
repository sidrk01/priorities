#ifndef __SORT_DESCENDING_HPP__
#define __SORT_DESCENDING_HPP__

#include "order.hpp"
#include <string>

class Sort_Descending: public Order {
	public: 

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


	 bool descending_title(){
                int i, j, k;
                unsigned int l1, l2;
                unsigned char tmp1, tmp2;
                unsigned int inc = 0;
                for (i = 0; i < item1->todo.size() - 1; i++){

                for (j = 0; j < item1->todo.size() - i - 1; j++){
                        for (k = 0; k < (item1->todo.at(j)->title).length(); k++){
                        tmp1 = (item1->todo.at(j)->title).at(k);
                        tmp2 = (item1->todo.at(j + 1)->title).at(k);
                        if (tmp1 < tmp2){
                        inc++;
			k = (item1->todo.at(j)->title).length();
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
                this->i = userC;
                this->item1 = taskIn;
        }

        ~Sort_Descending() {
        }
	
	virtual bool organize() {
		bool func_compl = false;
	if (this->i == 1)	
		func_compl = descending_done();
 	if (this->i == 2)
		func_compl = descending_dow();
	if (this->i == 3)
		func_compl = descending_title();
	if (this->i == 4)
		func_compl = descending_id();

	return func_compl;
	}
};

#endif //__SORT_DESCENDING_HPP__

