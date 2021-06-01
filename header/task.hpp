#ifndef __TASK_HPP__
#define __TASK_HPP__

#include <string>
//#include "strategy.hpp"

using namespace std;

class Order; 

class Task {
	public:
		bool complete;
    string daysOfWeek;
		string title;
		static int nextId;
		int id;

		Task() { id = nextId++; }
		
		virtual void markComplete(int id) = 0;
		virtual void modifyTask(string dow, string title, int id) = 0; 
//		virtual void removeTask(int id) = 0;
};

 int Task::nextId = 1;


#endif //__TASK_HPP__
