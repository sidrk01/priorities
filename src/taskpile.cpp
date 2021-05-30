#include "../header/taskpile.hpp"

using namespace std;

void TaskPile::markComplete(){
	
}

TaskPile::TaskPile(string title){
	this->title = title;	
}

void TaskPile::add_task(Task* task){
	//one task pile with multiple folders and the papers are the indivs
	task.push_back(task);			
}

void TaskPile::modifyTask(string title, int id){
	for(int i = 0; i < tasks.size(); ++i){
                if(id == tasks.at(i)->id){
                	tasks.at(i)->title = title;
		}
        }
}

void TaskPile::remove(int id){
	for(int i = 0; i < tasks.size(); ++i){
		if(id == tasks.at(i)->id){
			Task* t = task.at(i);
			tasks.erase(tasks.begin()+i);
			delete t;
		}
	}	
}
