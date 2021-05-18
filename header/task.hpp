#ifndef __TASK_HPP__
#define __TASK_HPP__

#include <string>
//#include "strategy.cpp"

using namespace std;

class Task {
	public:
//		Strategy* sort;
		string daysOfWeek;
		static int nextId;
		int id;
		string title;
		bool recurring;
		string group;
		bool complete;


		//virtual ~Task() {}

		virtual void markComplete(int id) = 0;
		virtual string printToDo() = 0;
		virtual void modifyTask(string daysOfWeek, bool recurring, string title, string group) = 0;
		virtual void remove(int id) = 0;
};

#endif //__TASK_HPP__
