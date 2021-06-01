#include "../header/client.hpp"
#include "../header/indivtask.hpp"
#include "../header/taskpile.hpp"
#include "../header/sortascending.hpp"
#include "../header/sortdescending.hpp"
#include "../header/sortrandom.hpp"
#include <sstream>

Client::Client(){
	this->taskInit = new Strategy();
}

void Client::displayGraphic() {
        cout << "   ___      _          _ __  _       " << endl;
        cout << "  / _ \\____(_)__  ____(_) /_(_)__ ___" << endl;
        cout << " / ___/ __/ / _ \\/ __/ / __/ / -_|_-<" << endl;
        cout << "/_/  /_/ /_/\\___/_/ /_/\\__/_/\\__/___/" << endl;
        cout << "                                     " << endl;
}

void Client::displayMainMenu() {
	cout << "1 ---Create New Task---\n" <<
		"2 ---Modify Existing Task---\n" <<
		"3 ---Mark Task as Complete---\n" <<
		"4 ---Delete Task---\n" <<
		"5 ---Print in Ascending Order---\n" <<
		"6 ---Print in Descending Order---\n" <<
		"7 ---Print in Random Order---\n" <<
		"8 ---Print Individual Task---\n" <<
		"9 ---Exit---\n";
}

bool Client::validateDow(string dow) {
	if (dow.length() != 7)
		return false;
	
	for (int i=0; i<dow.length(); i++) {
		if (dow[i] != 'n' && dow[i] != 'y')
			return false;	
	}

	return true;
}

bool Client::validateIsPile(string choice) {
        if (choice.length() != 1)
                return false;

	if (choice[0] != 'i' && choice[0] != 'p')
		return false;

        return true;
}

bool Client::validateIsToPile(string choice) {
        if (choice.length() != 1)
                return false;

        if (choice[0] != 'y' && choice[0] != 'n')
                return false;

        return true;
}

bool Client::validateTitle(string title) {
	if (title.length() > 30)
                return false;

        return true;
}

bool Client::getIsPile() {
	string choice;
	bool valid;
	do {
		cout << "Individual task (i) or task pile (p)? ";
		getline(cin, choice);
		valid = validateIsPile(choice);
	} while (!valid);

	if (choice[0] == 'p')
                return true;
        return false;
}

bool Client::getIsToPile() {
	string choice;
	bool valid;
        do {
                cout << "Within a task pile? (y/n) ";
                getline(cin, choice);
                valid = validateIsToPile(choice);
        } while (!valid);
	
	if (choice[0] == 'y')
		return true;
	return false;
}

void Client::inputTask(bool isPile, bool isToPile, bool isMod) {
	string dow;
	string title;
	bool valid = false;
	string newStr = "";

	if (isMod)
		newStr = " new";

	if (!isPile) {
		do {
			cout << "Enter a" << newStr << " string of 7 y/n’s for the task days of the week (ex. “ynynynn” for MWF): ";
			getline(cin, dow);
			valid = validateDow(dow);
		} while (!valid);

		valid = false;
	}

	do {
		cout << "Enter the" << newStr << " task name (max. 30 chars): ";
                getline(cin, title);
                valid = validateTitle(title);

        } while (!valid);
	
	valid = false;

	if (!isMod) {	// create the task (pile)
	  if (isPile){
		Task* u1 = new TaskPile(title);
		taskInit->todo.push_back(u1);	
	  } else {
		Task* u2 = new IndivTask(dow, title);
		taskInit->todo.push_back(u2);
		}
	} else {		// modify the task (pile)
		int id;
		string id_input;
		while (true) {
			cout << "Enter the task ID: ";
			getline(cin, id_input);
			stringstream validate(id_input);
			if (validate >> id && !(validate >> id_input) && id >= 1 && id <= 100) {// REPLACE 100 WITH nextId
				cout << "modifying task" << endl;
				break;
			}
			
			cin.clear();
			cerr << "IDs are >= 1 and <= " << ".\n"; // add nextId in between these two strings
		}
		for (unsigned int i = 0; i < taskInit->todo.size(); i++){
			if (taskInit->todo.at(i)->id == id){
				taskInit->todo.at(i)->modifyTask(dow, title);
				i = taskInit->todo.size();
			}
		}
	}
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

void Client::inputCompleteTask(bool isPile) {	
	for (unsigned int i = 0; i < taskInit->todo.size(); i++){
		if (taskInit->todo.at(i)->id == id){
			taskInit->todo.at(i)->markComplete(id);
		}
	}	
	cout << "complete\n";
}

void Client::inputRemoveTask(bool isPile) {
	for (unsigned int i = 0; i < taskInit->todo.at(i); i++){
                if (taskInit->todo.at(i)->id == id){
                        taskInit->todo.erase(taskInit->todo.begin() + i);
                }
        }
	cout << "remove\n";
}

int Client::inputPrintMenu() {
	int pmChoice;
	const int pmMax = 4;

	displayPrintMenu();
	pmChoice = inputMenu(pmMax);
	
	switch (pmChoice) {// print sorted tasks
		case 1://done?
			cout << "1" << endl;
			break;
                case 2://days of week
                        cout << "2" << endl;
                        break;
                case 3://name
                        cout << "3" << endl;
                        break;
                case 4://id
                        cout << "4" << endl;
                        break;
	}
  return pmChoice;
}

void Client::run() {
	int mmChoice;
	const int mmMax = 10;
	bool isPile;
	bool isToPile;
	
	cout << "WELCOME TO" << endl;
	displayGraphic();

	do {
		displayMainMenu();
		mmChoice = inputMenu(mmMax);
		
		switch(mmChoice) {
			case 1://create new task
				isPile = getIsPile();
				isToPile = getIsToPile();
				inputTask(isPile, isToPile, false);
				break;
                        case 2://modify existing task
				// if no tasks (nextId == 1), let user know + break;
				isPile = getIsPile();
                                isToPile = getIsToPile();
                                inputTask(isPile, isToPile, true);
                                break;
                        case 3:
				// if no tasks (nextId == 1), let user know + break;
				isPile = getIsPile();
                                inputCompleteTask(isPile);
                                break;
                        case 4:
				// if no tasks (nextId == 1), let user know + break;
				isPile = getIsPile();
                                inputRemoveTask(isPile);
                                break;
                        case 5://ascending
				// if no tasks (nextId == 1), let user know + break;
 	                        int choice2 = inputPrintMenu();
				new Sort_Ascending(choice, taskInit);
				taskInit->print();
                                break;
                        case 6://descending
				// if no tasks (nextId == 1), let user know + break;
				int choice1 = inputPrintMenu();
				new Sort_Descending(choice1, taskInit);
				taskInit->print();
				break;
                        case 7: 
				// if no tasks (nextId == 1), let user know + break;
                                // call random sort
                                new Sort_Random(0, taskInit);
				taskInit->print();
                                break;
                        case 8: 
				// if no tasks (nextId == 1), let user know + break;
                                // print information about one task (pile)
                                taskInit->print();
				break;
			case 9:
				cout << "Goodbye!" << endl;
				displayGraphic();
				break;
                        case 10:
                                cout << "EASTER EGG FOUND: displaying awesome graphic" << endl;
                                displayGraphic();
                                break;
			default:
				cout << "this should never show up since inputMenu handles it" << endl;
		}
	} while(mmChoice != mmMax - 1);
}
