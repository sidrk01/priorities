#ifndef __STRATEGY_HPP__
#define __STRATEGY_HPP__

#include "task.hpp"
#include "iostream"
#include <vector>
#include "iomanip"

using namespace std;
	


class Strategy {
	private:
	
	void repC(char k, int times){
		for (int i = 0; i <= times; i++){
        	cout << k;
       		}
	}

	void displayTableHeader() {
        cout << setw(45) << "Priorities" << endl;
	repC('=', 90); 
	cout << endl;
	
	cout << "||" << setw(2) << "Done?" << setw(2)
	<< "||" << setw(6) << "Day" << setw(5) 
	<< "||" << setw(17) << "Name" << setw(16) 
	<< "||" << setw(4) << "ID" << setw(4) 
	<< "||" << setw(18) << "Subtask of"  << setw(12)<< "||" << endl;
	
	repC('=', 90);
	cout << endl;
  	}	

	void printContents() {
	char finish = 0x00;
	for (int i = 0; i < todo.size(); i++){
	//checking char condition
	if (todo.at(i)->complete == true){	
		finish = 'T';
	} else { 
		finish = 'F';
	}		
	cout << "||" << setw(3) << finish << setw(4) 
	<< "||" << setw(8) << todo.at(i)->daysOfWeek << setw(3)  
	<< "||" << setw(23) << todo.at(i)->title << setw(10) 
	<< "||" << setw(4) << todo.at(i)->id << setw(4) 
	<< "||" << setw(17) << subtaskAdd(i) <<  endl;	
	}
	}

	string subtaskAdd(int i){
		int pileNum = pileIDs.at(i);
		for (unsigned int j = 0; j < todo.size(); j++){
			if (todo.at(j)->id == pileNum){
				return todo.at(j)->title;
			}
		}
		return "";
	}	

	public:
	vector<Task*> todo;
	Strategy(){ //vector<Task*> userInput){
//		for (int i = 0; i < userInput.size(); i++){
//			todo.push_back(userInput.at(i));
//		}
	}

	vector<int> pileIDs;

	bool print(){
		displayTableHeader();
		printContents(); 	
			
	return true;
	}

	bool idPass(int pileId){
		pileIDs.push_back(pileId);	
	}
};


#endif //__STRATEGY_HPP_
