#include "indivtask.hpp"

using namespace std;

int IndivTask::nextId = 1;

IndivTask::IndivTask(string daysOfWeek, bool recurring, string title, string group) {
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
