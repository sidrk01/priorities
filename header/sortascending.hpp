#ifndef __SORT_ASCENDING_HPP__
#define __SORT_ASCENDING_HPP__

class Sort_Ascending: public Order {
	public:
	Order* item1;
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
		for (i = 0; i < todo.size() - 1; i++){
		
		for (j = 0; j < todo.size() - i - 1; j++){
			if (todo.at(j)->complete == false){
				swap(todo.at(j), todo.at(j + 1));
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
	
	Sort_Ascending(vector<bool>userChoice){
		i = 0;	
		while (!userChoice.at(i)){
		i++;			
		}
		item1 = this;
	}


	~Sort_Ascending (){
		delete item1;			
	}

	bool organize() {
			
	}

	
}

#endif //__SORT_ASCENDING_HPP__
