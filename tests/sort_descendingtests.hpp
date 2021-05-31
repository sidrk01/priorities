#ifndef __SORT_DESCENDING_HPP__
#define __SORT_DESCENDING_HPP__

#include "../header/sortdescending.hpp"


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
        EXPECT_EQ(init->todo.at(0), task1);
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



#endif //__SORT_DESCENDING_HPP__
