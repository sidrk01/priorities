#ifndef __TASKPILE_TEST_HPP__
#define __TASKPILE_TEST_HPP__
//#include "../header/task.hpp"
//#include "../src/indivtask.cpp"
#include "../src/taskpile.cpp"
#include "gtest/gtest.h"
#include <string>

using namespace std;

TEST(TaskPile, AddTaskPile){

	string s = "school";
	Task* yee = new IndivTask("yyyyyyy","task");
	TaskPile* hi = new TaskPile(s);
	hi->add_task(yee);
	
	EXPECT_EQ(hi->title, "school");
}

TEST(TaskPile, TaskInTask){
	string s = "school";
        Task* yee = new IndivTask("yyyyyyy","task");
        TaskPile* hi = new TaskPile(s);
        TaskPile* wat = new TaskPile("CS");
	hi->add_task(yee);
	wat->add_task(hi);
	EXPECT_EQ(wat->title, "CS");
}

/*
TEST(TaskPile, RemoveTaskPile){
//	string s = "school";
        Task* yee = new IndivTask("yyyyyyy","task");
        TaskPile* hi = new TaskPile(s);
        TaskPile* wat = new TaskPile("CS");
        hi->add_task(yee);
        wat->add_task(hi);
	//cout << wat->id; 12
	wat->removeTask(wat->id);
	EXPECT_EQ(hi->title, "school");
//

	vector<Task*> vec;
	Task* t1 = new IndivTask("yyyyyyy","t1");
	TaskPile* tp1 = new TaskPile("taskpile");
	tp1->add_task(t1);
	vec.push_back(tp1);
	int s1 = vec.size();
	cout << endl << "before remove " << vec.at(0);
	tp1->removeTask(tp1->id);
	cout << endl << "after remove " << vec.at(0);
	int s2 = vec.size();

	EXPECT_EQ(s1>s2,true);	
}
*/

TEST(TaskPile, ModifyTaskPile){
	string s = "school";
        Task* yee = new IndivTask("yyyyyyy","task");
        TaskPile* hi = new TaskPile(s);
        hi->add_task(yee);
	//cout << hi->id; 14
	hi->modifyTask("nnnnnnn","hello",14);

        EXPECT_EQ(hi->title, "hello");	
}

TEST(TaskPile, MarkAsComplete){
	string s = "school";
	Task* yee = new IndivTask("yyyyyyy","task");
	TaskPile* hi = new TaskPile(s);
	hi->markComplete(16);
	//cout << hi->id;
	EXPECT_EQ(hi->complete, true);

}

#endif
