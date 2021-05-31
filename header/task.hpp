#ifndef __TASK_HPP__
#define __TASK_HPP__

#include <string>
//#include "strategy.cpp"

using namespace std;

class Task {
	public:
//		Strategy* sort;
		bool complete;
        string daysOfWeek;
        string title;
        string group;
		
		virtual void markComplete() = 0;
		virtual void modifyTask(const string& dow, string title) = 0; 
		virtual void remove() = 0;
		virtual void addTask(const string& dow, string title) = 0;
};


#endif //__TASK_HPP__
