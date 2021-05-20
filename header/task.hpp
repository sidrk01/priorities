#ifndef __TASK_HPP__
#define __TASK_HPP__

#include <string>
//#include "strategy.cpp"

using namespace std;

class Task {
	public:
//		Strategy* sort;
                string daysOfWeek;
                string title;
                bool complete;
                string group;

		//virtual ~Task() {}

		virtual void markComplete() = 0;
		virtual string printToDo() = 0;
		virtual void modifyTask(bool dow[], int dowSize, string title, string group) = 0;
		virtual void remove() = 0;
};

#endif //__TASK_HPP__
