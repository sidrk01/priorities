#ifndef __SORT_ASCENDING_TEST_HPP__
#define __SORT_ASCENDING_TEST_HPP__

#include "../header/indivtask.hpp"
#include "../header/sortascending.hpp"


TEST(SortAscendingTests, NoneComplete){
	vector<Task*> userTasks;
	Task* task1 = new IndivTask("M", false, "Math", "Homework");
	Task* task2 = new IndivTask("T", false, "Math", "Work");
	userTasks.push_back(task1);
	userTasks.push_back(task2);

	vector<bool> isDone = {true};
	
	Strategy* init = new Strategy(userTasks);
	Sort_Ascending* checkComp = new Sort_Ascending(isDone, init);

	EXPECT_EQ(checkComp->organize(), true); 
}


#endif //__SORT_ASCENDING_TEST_HPP__
