#include "../header/client.hpp"
#include <string>
#include <sstream>

using namespace std;

void Client::displayMainMenu() {
	cout << "1 ---Create New Task---\n" <<
		"2 ---Create New Task Pile---\n" <<
		"3 ---Modify Existing Task---\n" <<
		"4 ---Modify Existing Task Pile---\n" <<
		"5 ---Mark Task as Complete---\n" <<
		"6 ---Delete Task---\n" <<
		"7 ---Print in Ascending Order---\n" <<
		"8 ---Print in Descending Order---\n" <<
		"9 ---Print in Random Order---\n" <<
		"10 ---Print Individual Task---\n" <<
		"11 ---Exit---\n";
}

void Client::inputTask(bool isPile, bool isMod) {
	string dow;
	string title;
	cout << "Enter a string of 7 y/n’s for the task days of the week (ex. “ynynynn” for MWF): ";
	getline(cin, dow);
	cout << "Enter the task name (max. 30 chars): ";
	getline(cin, title);
	
}

void Client::displayPrintMenu() {
	cout << "1 ---Status---\n" <<
		"2 ---Days of the week---\n" <<
		"3 ---Name---\n" <<
		"4 ---ID---\n";
}

int Client::inputMenu(const int menuMax) {
	int input;
	string str_input;
	while (true) {
		cout << "Enter choice: ";
		getline(cin, str_input);
		stringstream validate(str_input);
		if (validate >> input && !(validate >> str_input) && input >= 1 && input <= menuMax)
			return input;
		cin.clear();
		cerr << "Input must be an integer >= 1 and <= " << menuMax << ".\n";
	}
}

void Client::inputPrintMenu() {
	int pmChoice;
	const int pmMax = 4;

	displayPrintMenu();
	pmChoice = inputMenu(pmMax);
	
	switch (pmChoice) {
		case 1:
			cout << "1" << endl;
			break;
                case 2:
                        cout << "2" << endl;
                        break;
                case 3:
                        cout << "3" << endl;
                        break;
                case 4:
                        cout << "4" << endl;
                        break;
	}
}

void Client::run() {
	int mmChoice;
	const int mmMax = 11;
	
	cout << "WELCOME TO" << endl;
    	cout << "   ___      _          _ __  _       " << endl;
    	cout << "  / _ \\____(_)__  ____(_) /_(_)__ ___" << endl;
    	cout << " / ___/ __/ / _ \\/ __/ / __/ / -_|_-<" << endl;
    	cout << "/_/  /_/ /_/\\___/_/ /_/\\__/_/\\__/___/" << endl;
    	cout << "                                     " << endl;

	do {
		displayMainMenu();
		mmChoice = inputMenu(mmMax);
		
		switch(mmChoice) {
			case 1:
				inputTask(false, false);
				break;
                        case 2:
                                inputTask(true, false);
                                break;

                        case 3:
                                inputTask(false, true);
                                break;
                        case 4:
                                inputTask(true, true);
                                break;
                        case 5:
                                // call delete
                                break;
                        case 6:
				inputPrintMenu();
				break;
                        case 7: 
                                inputPrintMenu();
                                break;
                        case 8: 
                                inputPrintMenu();
                                break;
                        case 9: 
                                inputPrintMenu();
                                break;
                        case 10: 
                                inputPrintMenu();
                                break;
			case 11:
				cout << "Exiting\n" << endl;
				break;
			default:
				cout << "please enter valid input" << endl;
		}
	} while(mmChoice != mmMax);
}
