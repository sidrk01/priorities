#include "../header/indivtask.hpp"
#include <vector>
#include <sstream>

using namespace std;

IndivTask::IndivTask(bool dow[], int dow_size, string title, string group) {
    	vector<string> dowVector;
    	if (dow_size != 7) {
        	throw std::invalid_argument("Something went wrong");
    	}
    
    	map<int,string> days;
    	days[0] = "M";
    	days[1] = "T";
    	days[2] = "W";
    	days[3] = "Th";
    	days[4] = "F";
    	days[5] = "S";
    	days[6] = "Su"; 
	int arrLen = 0;    	

    	for (int i=0; i<7; i++) {
        	if (dow[i]) {
			dowVector.push_back(days[i]);
        	}	
        
        	else if (!dow[i]){ 
            		continue;
        	}
        
        
        	else {
            		throw std::invalid_argument("Something went wrong");
        	}
            
    	}
	
	for (int i=0; i<dowVector.size(); i++) {
		this->daysOfWeek += dowVector[i];
	}
	
	this->title = title;
	this->group = group;
	this->complete = false;
}

void IndivTask::markComplete() {
}

void IndivTask::remove() {
	
}

string IndivTask::printToDo() {
	
}

void IndivTask::modifyTask(bool dow[], int dowSize, string title, string group){		
	this->daysOfWeek = daysOfWeek;
        this->title = title;
        this->group = group;		
}
