#ifndef __SORT_ASCENDING_TEST_HPP__
#define __SORT_ASCENDING_TEST_HPP__

#include "../header/indivtask.hpp"
#include "../header/sortascending.hpp"
#include "../header/sortdescending.hpp"
#include "../header/sortrandom.hpp"

#include "iostream"
using namespace std;

TEST(SortDescending, IdComplete){
        vector<Task*> userTasks;
        IndivTask u1("ynnnnnn", "Math");
        IndivTask u2("ynnnnnn", "Math");
        Task* task1 = &u1;
        Task* task2 = &u2;
        userTasks.push_back(task1);
        userTasks.push_back(task2);
        Strategy* init = new Strategy(userTasks);
        Sort_Descending user1(4, init);
	user1.organize();
        EXPECT_EQ(init->todo.at(0), task2);
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
        EXPECT_EQ(init->todo.at(0), task1);
}


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
        EXPECT_EQ(init->todo.at(0), task1);
}

TEST(SortAscending, TitleSort1){        
	vector<Task*> userTasks;
        Task* task1 = new IndivTask ("ynnnnnn", "Math");
        Task* task2 = new IndivTask ("ynnnnnn", "Math");
        userTasks.push_back(task1);
        userTasks.push_back(task2);

        Strategy* init = new Strategy(userTasks);
        Sort_Ascending* checkComp = new Sort_Ascending(3, init);
        checkComp->organize();
	EXPECT_EQ(init->todo.at(0), task1);
	
}

TEST(SortAscending, TitleSort2){
        vector<Task*> userTasks;
        Task* task1 = new IndivTask("ynnnnnn", "Math");
        Task* task2 = new IndivTask("ynnnnnn", "Math");
        Task* task3 = new IndivTask("yynnnnn", "English");
        userTasks.push_back(task1);
        userTasks.push_back(task2);
        userTasks.push_back(task3);

        Strategy* init = new Strategy(userTasks);
        Sort_Ascending* checkComp = new Sort_Ascending(3, init);
        checkComp->organize();

        EXPECT_EQ(init->todo.at(2), task3);
} 

TEST(SortAscending, daysofWeekSort){
	vector<Task*> userTask;

	userTask.push_back(new IndivTask("yyynnnn", "Math"));
	userTask.push_back(new IndivTask("yyynnnn", "Math"));
	userTask.push_back(new IndivTask("yynnnnn", "Math"));

	Strategy* init = new Strategy(userTask);
        Sort_Ascending* checkComp = new Sort_Ascending(2, init);
        checkComp->organize();

	EXPECT_EQ(init->todo.at(0)->daysOfWeek, "MT"); 
}

TEST(SortDescending, CheckNoneComplete){
        vector<Task*> userTasks;
        Task* task1 = new IndivTask("ynnnnnn", "Math");
        Task* task2 = new IndivTask("ynnnnnn", "Math");
        userTasks.push_back(task1);
        userTasks.push_back(task2);

        Strategy* init = new Strategy(userTasks);
        Sort_Descending* sort1 = new Sort_Descending(1, init);
        sort1->organize();

        EXPECT_EQ(init->todo.at(0), task1);
}

TEST(SortDescending, CheckOneComplete){
        vector<Task*> userTasks;
        Task* task1 = new IndivTask("ynnnnnn", "Math");
        Task* task2 = new IndivTask("ynnnnnn", "Math");
        Task* task3 = new IndivTask("ynnnnnn", "Math");
	userTasks.push_back(task1);
        userTasks.push_back(task2);
	userTasks.push_back(task3);

	task3->markComplete();

        Strategy* init = new Strategy(userTasks);
        Sort_Descending* user1 = new Sort_Descending(1, init);
	user1->organize();
 
       EXPECT_EQ(init->todo.at(0), task3);
}


TEST(SortDescending, CheckTwoComplete){
        vector<Task*> userTasks;
        Task* task1 = new IndivTask("ynnnnnn", "Math");
        Task* task2 = new IndivTask("ynnnnnn", "Math");
        Task* task3 = new IndivTask("ynnnnnn", "Math");
        userTasks.push_back(task1);
        userTasks.push_back(task2);
        userTasks.push_back(task3);

	task1->markComplete();

        Strategy* init = new Strategy(userTasks);
        Sort_Descending* user1 = new Sort_Descending(1, init);
	user1->organize();
        EXPECT_EQ(init->todo.at(0), task1);
}

TEST(SortDescending, TitleSort){
	vector<Task*> userTasks;
	Task* task1 = new IndivTask("ynnnnnn", "Math");
        Task* task2 = new IndivTask("yynnnnn", "Zebra");
	userTasks.push_back(task1);
        userTasks.push_back(task2);

        Strategy* init = new Strategy(userTasks);
	Sort_Descending* checkComp = new Sort_Descending(3, init);
	checkComp->organize();
	EXPECT_EQ(init->todo.at(0), task2);	
}

TEST(SortRandom, SortRand){
        //---- testing sort_rand:       
        vector<Task*> userTasks;
        Task* task1 = new IndivTask("ynnnnnn", "Math");
        Task* task2 = new IndivTask("ynnnnnn", "Math");
        userTasks.push_back(task1);
        userTasks.push_back(task2);
  
        Strategy* init = new Strategy(userTasks);
        Sort_Random* checkComp = new Sort_Random(1, init);
        
        EXPECT_EQ(checkComp->organize(), true);
}

TEST(SortRandom, Size){
   	vector<Task*> userTasks;
        Task* task1 = new IndivTask("ynnnnnn", "Math");
        Task* task2 = new IndivTask("ynnnnnn", "Math");
        userTasks.push_back(task1);
        userTasks.push_back(task2);

        Strategy* init = new Strategy(userTasks);
        Sort_Random* checkComp = new Sort_Random(1, init);
	checkComp->organize();
        EXPECT_EQ(init->todo.size(),2);
}
#endif //__SORT_ASCENDING_TEST_HPP__
