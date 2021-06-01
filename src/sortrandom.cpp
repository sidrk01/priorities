#include "../header/sortrandom.hpp"

Sort_Random::Sort_Random(int userOption, Strategy* taskInit){
		this->i = userOption;
		this->item1 = taskInit;
}

Sort_Random::~Sort_Random(){}


bool Sort_Random::organize(){
		int i, j;
		for (i = 0; i < item1->todo.size() - 1; i++){
		
		for (j = 0; j < item1->todo.size() - i - 1; j++){
		    if (rand() % 100 + 1 <= 50) {	
			if (item1->todo.at(j)->complete == false){
				swap(j, j + 1);
			}
			}
		}
	}
	
	return true;		
	}

		
