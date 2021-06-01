#ifndef __CLIENT_HPP__
#define __CLIENT_HPP__

#include <iostream>
#include <string>
#include <vector>
#include "indivtask.hpp"
#include "strategy.hpp"
#include "order.hpp"

using namespace std;

class Client {
	private:	
		Strategy* taskInit;	
	
		void displayGraphic();
		void displayMainMenu();
                void displayPrintMenu();
		bool getIsPile();
		bool getIsToPile();
		bool validateIsPile(string choice);
		bool validateIsToPile(string choice);
		bool validateDow(string dow);
		bool validateTitle(string title);
		int inputMenu(const int menuMax);
                void inputTask(bool isPile, bool isToPile, bool isMod);
		void inputCompleteTask(bool isPile);
		void inputRemoveTask(bool isPile);
                int inputPrintMenu();

		int validateId();
		void sortdescend();
		void sortascend();
		void sortrand();
	public:
		Client();
		~Client();
		void run();
};

#endif //__CLIENT_HPP__
