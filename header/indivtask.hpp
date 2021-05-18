#ifndef __INDIVTASK_HPP__
#define __INDIVTASK_HPP__

//#include "strategy.cpp"
#include "task.hpp"
#include "iostream"


using namespace std;

class IndivTask : public Task {
	private:
		
	public:
//		Strategy* sort;
		string daysOfWeek;
		static int nextId;
		int id;
		string title;
		bool recurring;
		string group;
		bool complete;

		IndivTask(string daysOfWeek, bool recurring, string title, string group);

		//virtual ~IndivTask() {}
		
		virtual void remove(int id);
		virtual void markComplete(int id);
		virtual string printToDo();
		virtual void modifyTask(string daysOfWeek, bool recurring, string title, string group);		
};

#endif //__INDIVTASK_HPP__

