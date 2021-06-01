#ifndef __CLIENT_HPP__
#define __CLIENT_HPP__

#include <iostream>
#include <string>

using namespace std;

class Client {
	private:		
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
                void inputPrintMenu();
	public:
		Client() { }
		void run();
};

#endif //__CLIENT_HPP__
