#ifndef __TASK_HPP__
#define __TASK_HPP__

#include <string>
//#include "strategy.hpp"

using namespace std;

class Order; 

class Task {
	public:
//		Strategy* sort;
		bool complete;
                string daysOfWeek;
                string title;
		static int nextId;
		int id;
		
		Task() { id = nextId++; }		
		//virtual ~Task() {}
		virtual void remove(int id) = 0;
		virtual void markComplete(int id) = 0;
		virtual void modifyTask(const string& dow, string title, int id) = 0;
};

 int Task::nextId = 1;

#endif //__TASK_HPP__
