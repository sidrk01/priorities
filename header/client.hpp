#ifndef __CLIENT_HPP__
#define __CLIENT_HPP__

#include <iostream>

class Client {
	private:
		void displayMainMenu();
                void displayPrintMenu();
                int inputMenu(const int menuMax);
                void inputTask(bool isPile, bool isMod);
                void inputPrintMenu();
	public:
		Client() { }
		void run();
};

#endif //__CLIENT_HPP__
