#include "../header/taskpile.hpp"
//#include "../header/task.hpp"

using namespace std;

void TaskPile::markComplete(int id){
	if(this->id == id){
		this->complete = true;
	}
	for(int i = 0; i < tasks.size(); ++i){
		tasks.at(i)->markComplete(id);
	}
}

TaskPile::TaskPile(string title){
	this->title = title;	
}


void TaskPile::add_task(Task* task){
	//one task pile with multiple folders and the papers are the indivs
	tasks.push_back(task);			
}

void TaskPile::modifyTask(string dow, string title, int id){
	if(this->id == id){
		this->title = title;
		return;
	}
	for(int i = 0; i < tasks.size(); ++i){
                if(id == tasks.at(i)->id){
                	tasks.at(i)->title = title;
		}
        }
}

/*
void TaskPile::removeTask(int id){ //use this
	for(int i = 0; i < tasks.size(); ++i){
		cout << "in for loop of remove task" << endl;
		// if(id == tasks.at(i)->id){
		// 	Task* t = tasks.at(i);
		// 	tasks.erase(tasks.begin()+i);
		// 	delete t;
		// }
		tasks.at(i)->removeTask(id);
	}
	if(this->id == id){
                cout << "in if of remove task" << endl;
                delete this;
                cout << "after delete this" << endl;
                //return;
         }	
}

*/

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
