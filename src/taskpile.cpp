#include "../header/taskpile.hpp"
#include "../header/task.hpp"
#include "../header/indivtask.hpp"
using namespace std;

void TaskPile::markComplete(){
	this->complete = true;
}

TaskPile::TaskPile(string title){
	this->title = title;	
}


void TaskPile::add_task(Task* task){
	//one task pile with multiple folders and the papers are the indivs
	tasks.push_back(task);			
}

void TaskPile::modifyTask(const string& dow, string title, int id){
	for(int i = 0; i < tasks.size(); ++i){
                if(id == tasks.at(i)->id){
                	tasks.at(i)->title = title;
		}
        }
}

void TaskPile::remove(int id){ //use this
	if(this->id == id){
		delete this;
		return;
	}
	for(int i = 0; i < tasks.size(); ++i){
		// if(id == tasks.at(i)->id){
		// 	Task* t = tasks.at(i);
		// 	tasks.erase(tasks.begin()+i);
		// 	delete t;
		// }
		tasks->remove(id);
	}	
}



//can but can only make one 
//not getting info if we're making task pile or indiv task so we dont have 
TaskPile::~TaskPile(){
	for(int i = 0; i < tasks.size();++i){ //only have 1 layer
		delete tasks.at(i);
	} 

}


//avoid calling remove on tasks that are within task piles
//not in vec in client then dont do anything then it wont get deleted from taskpile


/*
//in client
void deleteInClient() {
	//ask the user for id
	for(int i = 0; i < clientVector.size(); i++) {
		clientVector.at(i)->remove(id);
	}
}

//in task pile
void remove(id) {
	if(this->id == id) {
		delete this; // calls destructor
		return;
	}
	for(int i = 0; i < taskPileVector.size(); i++) {
		taskPileVector->remove(id);
	}
}

//in indiv task
void remove(id) {
	if (this->id == id) {
		delete this;
	}
}

*/

// do same thing for modify