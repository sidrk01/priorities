#ifndef __TASK_HPP__
#define __TASK_HPP__

#include <string>
#include "strategy.cpp"

using namespace std;

class Task {
	public:
		Strategy* sort;
		string daysOfWeek;
		int id;
		string title;
		bool recurring;
		string group;

		Task() { }

		//virtual ~Task() {}

		virtual bool checkCompletion(int id) = 0;
		virtual string printToDo() = 0;
		virtual void addTask(string daysOfWeek, bool recurring, string title, string group) = 0;
		virtual void modifyTask(string daysOfWeek, bool recurring, string title, string group, int id) = 0;

};

#endif //__TASK_HPP__
