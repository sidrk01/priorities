#ifndef __TASKPILE_HPP__
#define __TASKPILE_HPP__

#include "task.hpp"
#include <vector>

using namespace std;


class TaskPile : public Task {
	private:
		vector<Task*> tasks;
		string name;
	public:
		virtual void markComplete();
		TaskPile(string title);
		virtual void modifyTask(const string& dow, string title);
		// virtual void remove(); //could be a function of task pile but would need an id
		virtual void addTask(const string& dow, string title);
		~TaskPile();

};


#endif
