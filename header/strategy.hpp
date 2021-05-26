#ifndef __STRATEGY_HPP__
#define __STRATEGY_HPP__

#include "task.hpp"
#include "iostream"

using namespace std;

class Strategy {

	public:
	vector<Task*> todo;
	Strategy(vector<Task*> userInput){
		for (int i = 0; i < userInput.size(); i++){
			todo.push_back(userInput.at(i));
		}
	}
	
};


#endif //__STRATEGY_HPP_
