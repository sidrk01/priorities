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
		IndivTask(const string& dow, string title);

		//virtual ~IndivTask() {}
		
		virtual void remove(int id);
		virtual void  markComplete();
		virtual void modifyTask(const string& dow, string title, int id);		
};

#endif //__INDIVTASK_HPP__

