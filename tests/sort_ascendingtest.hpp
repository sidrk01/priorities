#ifndef __SORT_ASCENDING_TEST_HPP__
#define __SORT_ASCENDING_TEST_HPP__

#include "../header/indivtask.hpp"
#include "../header/sortascending.hpp"

#include "iostream"
using namespace std;


TEST(SortAscendingTests, NoneComplete){
	vector<Task*> userTasks;
	Task* task1 = new IndivTask("ynnnnnn", "Math");
	Task* task2 = new IndivTask("ynnnnnn", "Math");
	userTasks.push_back(task1);
	userTasks.push_back(task2);

	
	Strategy* init = new Strategy(userTasks);
	Sort_Ascending* checkComp = new Sort_Ascending(1, init);

	EXPECT_EQ(checkComp->organize(), true); 
}

TEST(SortAscending, CheckNoneComplete){
	vector<Task*> userTasks;
        Task* task1 = new IndivTask("ynnnnnn", "Math");
        Task* task2 = new IndivTask("ynnnnnn", "Math");
        userTasks.push_back(task1);
        userTasks.push_back(task2);

        Strategy* init = new Strategy(userTasks);
        Sort_Ascending* checkComp = new Sort_Ascending(1, init);
	checkComp->organize();
        
	EXPECT_EQ(init->todo.at(0), task2);
}

TEST(SortAscending, CheckOneComplete){
        vector<Task*> userTasks;
        Task* task1 = new IndivTask("ynnnnnn", "Math");
        Task* task2 = new IndivTask("ynnnnnn", "Math");
        Task* task3 = new IndivTask("ynnnnnn", "Math");
	userTasks.push_back(task1);
        userTasks.push_back(task2);
	userTasks.push_back(task3);

	task3->markComplete();

        Strategy* init = new Strategy(userTasks);
        Sort_Ascending* checkComp = new Sort_Ascending(1, init);
	checkComp->organize();
 
       EXPECT_EQ(init->todo.at(2), task1);
}


TEST(SortAscending, CheckTwoComplete){
        vector<Task*> userTasks;
        Task* task1 = new IndivTask("ynnnnnn", "Math");
        Task* task2 = new IndivTask("ynnnnnn", "Math");
        Task* task3 = new IndivTask("ynnnnnn", "Math");
        userTasks.push_back(task1);
        userTasks.push_back(task2);
        userTasks.push_back(task3);

	task1->markComplete();

        Strategy* init = new Strategy(userTasks);
        Sort_Ascending* checkComp = new Sort_Ascending(1, init);
	checkComp->organize();
        EXPECT_EQ(init->todo.at(0), task3);
}

TEST(SortAscending, IdComplete){
	vector<Task*> userTasks;
	IndivTask u1("ynnnnnn", "Math");
        IndivTask u2("ynnnnnn", "Math");
        Task* task1 = &u1;
	Task* task2 = &u2;
	userTasks.push_back(task1);
	userTasks.push_back(task2);

	Strategy* init = new Strategy(userTasks);
	Sort_Ascending* checkComp = new Sort_Ascending(4, init);
	checkComp->organize();
	EXPECT_EQ(init->todo.at(0), task2);

}

TEST(SortAscending, TitleSort){
        vector<Task*> userTasks;
        Task* task1 = new IndivTask ("ynnnnnn", "Math");
        Task* task2 = new IndivTask ("ynnnnnn", "Math");
        userTasks.push_back(task1);
        userTasks.push_back(task2);

        Strategy* init = new Strategy(userTasks);
        Sort_Ascending* checkComp = new Sort_Ascending(3, init);
        checkComp->organize();
	EXPECT_EQ(init->todo.at(1), task2);
	
}

TEST(SortAscending, TitleSort2){
        vector<Task*> userTasks;
        Task* task1 = new IndivTask("ynnnnnn", "Math");
        Task* task2 = new IndivTask("ynnnnnn", "Math");
        Task* task3 = new IndivTask("ynnnnnn", "English");
        userTasks.push_back(task1);
        userTasks.push_back(task2);
        userTasks.push_back(task3);

        Strategy* init = new Strategy(userTasks);
        Sort_Ascending* checkComp = new Sort_Ascending(3, init);
        checkComp->organize();

        EXPECT_EQ(init->todo.at(0), task3);
}
#endif //__SORT_ASCENDING_TEST_HPP__
