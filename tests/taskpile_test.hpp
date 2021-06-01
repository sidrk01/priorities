#ifndef __TASKPILE_TEST_HPP__
#define __TASKPILE_TEST_HPP
#include "../header/task.hpp"
#include "../header/indivtask.hpp"
#include "../header/taskpile.hpp"
#include "gtest/gtest.h"
#include <string>

using namespace std;

TEST(TaskPile, AddTaskPile){

	string s = "school";
	Task* yee = new IndivTask("yyyyyyy",s);
	TaskPile* hi = new TaskPile(s);
	hi->add_task(yee);
	
	EXPECT_EQ(hi->title, "school");
}

TEST(TaskPile, TaskInTask){
	
}

TEST(TaskPile, RemoveTaskPile){

}

TEST(TaskPile, ModifyTaskPile){

}

TEST(TaskPile, MarkAsComplete){

}

#endif
