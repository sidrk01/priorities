#include "../header/sortascending.hpp"

Sort_Ascending::Sort_Ascending(int userChoice, Strategy* taskInit){
		this->i = userChoice;	
		this->item1 = taskInit;
}

Sort_Ascending::~Sort_Ascending (){
		//delete item1;			
}

bool Sort_Ascending::organize() {
	bool func_compl = false;	
	if (this->i == 1)	
		func_compl = ascending_done();
	if (this->i == 2)
		func_compl = ascending_dow();
	if (this->i == 3)
		func_compl = ascending_title();
	if (this->i == 4)
		func_compl = ascending_id();
	  	
	return func_compl;				
}

bool Sort_Ascending::ascending_title(){
                int i, j, k;
                unsigned int l1, l2;
		unsigned char tmp1, tmp2;
		unsigned int inc = 0;
		for (i = 0; i < item1->todo.size() - 1; i++){

                for (j = 0; j < item1->todo.size() - i - 1; j++){
			for (k = 0; k < (item1->todo.at(j)->title).length(); k++){
			tmp1 = (item1->todo.at(j)->title).at(k);
			tmp2 = (item1->todo.at(j + 1)->title).at(k);
			if (tmp1 > tmp2){
			inc++;
			}	
			if (inc != 0){ 
			swap(j, j + 1);
			inc = 0;
			}
			}
		}
		}        
               

        return true;
}

bool Sort_Ascending::ascending_done(){
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

bool Sort_Ascending::ascending_dow(){
		int i, j;
                for (i = 0; i < item1->todo.size() - 1; i++){

                for (j = 0; j < item1->todo.size() - i - 1; j++) { 
                        if ((item1->todo.at(j)->daysOfWeek).length() >  (item1->todo.at(j+1)->daysOfWeek).length()){
                                swap(j, j + 1);
                        }
                }
        }

        return true;		
	}

bool Sort_Ascending::ascending_id(){
 	        int i, j;
                for (i = 0; i < item1->todo.size() - 1; i++){

                for (j = 0; j < item1->todo.size() - i - 1; j++){
                        if (item1->todo.at(j)->id > item1->todo.at(j+1)->id){
                                swap(j, j + 1);
                        }
                }
        }

        return true;	
	}
