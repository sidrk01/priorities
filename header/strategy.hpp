#ifndef __STRATEGY_HPP__
#define __STRATEGY_HPP__

#include "task.hpp"
#include "iostream"

using namespace std;

class Strategy {

	public:
	vector<Task> todo;
	Strategy(){
		
		Task* userInput = this;	
		todo.push_back(&userInput);
	}
	
};


#endif //__STRATEGY_HPP_
