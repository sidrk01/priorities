#ifndef __INDIVTASK_HPP__
#define __INDIVTASK_HPP__

//#include "strategy.cpp"
#include "task.hpp"
#include "iostream"
#include "vector"

using namespace std;

class IndivTask : public Task {
	private:
		
	public:
//		Strategy* sort;
		string daysOfWeek;
		string title;
		bool complete;
		string group;
		IndivTask(bool dow[], int dow_size, string title, string group);

		//virtual ~IndivTask() {}
		
		virtual void remove();
		virtual void  markComplete();
		virtual string printToDo();
		virtual void modifyTask(bool dow[], int dow_size, string title, string group);		
};

#endif //__INDIVTASK_HPP__

