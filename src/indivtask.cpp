#include "../header/indivtask.hpp"
#include <vector>
#include <sstream>
using namespace std;

int IndivTask::nextId = 1;

IndivTask::IndivTask(string daysOfWeek, bool recurring, string title, string group) {
	//enter days with commas separating them "m,t,w"
	/*
	if(daysOfWeek.find(",")){
		vector<string> output;
        	stringstream s(daysOfWeek);
        	while(s.good()){
                	string substr;
                	getline(s, substr, ',');
                	output.push_back(substr);
        	}
        	for(int i = 0; i < output.size(); ++i){
                	this->daysOfWeek = output.at(i); //overwrites the day
        	}
	}	
	*/

	this->daysOfWeek = daysOfWeek;
	this->recurring = recurring;
	this->title = title;
	this->group = group;
	this->complete = false;
	this->id = nextId;
	++nextId;
}

void IndivTask::markComplete(int id) {
	if (id < nextId && id > 0) {
		this->complete = true;
	} 
}

void IndivTask::remove(int id) {
	
}

string IndivTask::printToDo() {
	
}

void IndivTask::modifyTask(string daysOfWeek, bool recurring, string title, string group){		
	this->daysOfWeek = daysOfWeek;
        this->recurring = recurring;
        this->title = title;
        this->group = group;		
}
