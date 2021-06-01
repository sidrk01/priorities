#include "../header/indivtask.hpp"
#include <vector>
#include <sstream>
#include <map>

using namespace std;

IndivTask::IndivTask(const string& dow, string title) {
    	this->complete = false;

    	map<int,char> days;
    	days[0] = 'M';
    	days[1] = 'T';
    	days[2] = 'W';
    	days[3] = 'H';
    	days[4] = 'F';
    	days[5] = 'S';
    	days[6] = 'U'; 

    	for (int i=0; i<dow.length(); i++) {
        	if (dow[i] == 'y') {
			this->daysOfWeek += days[i];
        	}	
        	else if (dow[i] == 'n'){ 
            		continue;
        	} 
		else {
            		throw std::invalid_argument("Something went wrong");
        	}
            
    	}

	this->title = title;

	//this->group = group;
}

/*
void IndivTask::removeTask(int id) {
	if (this->id == id) {
		delete this;
	//	return;
	}	
}
*/

void IndivTask::markComplete(int id) {
  if(this->id == id)
	  this->complete = true;
    
}

void IndivTask::modifyTask(string dow, string title, int id){		
        map<int,char> days;
        days[0] = 'M';
        days[1] = 'T';
        days[2] = 'W';
        days[3] = 'H';
        days[4] = 'F';
        days[5] = 'S';
        days[6] = 'U';

        for (int i=0; i<dow.length(); i++) {
                if (dow[i] == 'y') {
                        this->daysOfWeek += days[i];
                }
                else if (dow[i] == 'n'){
                        continue;
                }
                else {
                        throw std::invalid_argument("Something went wrong");
                }

        }
        this->title = title;
}
