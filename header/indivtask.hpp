#ifndef __INDIVTASK_HPP__
#define __INDIVTASK_HPP__

#include "strategy.cpp"
#include "task.hpp"
#include "iostream"


using namespace std;

class IndivTask : public Task {
	private:
		
	public:
		Strategy* sort;
		string daysOfWeek;
		static int nextId;
		int id;
		string title;
		bool recurring;
		string group;
		bool complete;

		IndivTask() { }

		//virtual ~IndivTask() {}

		virtual bool checkCompletion(int id) = 0;
		virtual string printToDo() = 0;
		virtual void addTask(string daysOfWeek, bool recurring, string title, string group) = 0;
		
};

#endif //__INDIVTASK_HPP__

