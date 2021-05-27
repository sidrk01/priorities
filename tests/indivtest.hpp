#ifndef __INDIV_TEST_HPP__
#define __INDIV_TEST_HPP__

#include <string>
#include "../header/indivtask.hpp"

TEST(IndivConstruct, NewTask){
 	IndivTask userTask("M", false, "Math", "Homework");
	string s1 = userTask.daysOfWeek;
	string s2 = userTask.title;
	string s3 = userTask.group;
	string fullStr = s1 + " " + s2  + " " + s3;
	
	EXPECT_EQ(fullStr, "M Math Homework");	
}


TEST(IndivConstruct, NonGroupTask){
        IndivTask userTask("T", false, "Math", " ");
        string s1 = userTask.daysOfWeek;
        string s2 = userTask.title;
        string s3 = userTask.group;
        string fullStr = s1 + " " + s2  + " " + s3;

        EXPECT_EQ(fullStr, "T Math  ");
}

TEST(IndivConstruct, GroupTask){
        IndivTask userTask("W", false, "Groceries", "Shopping");
        string s1 = userTask.daysOfWeek;
        string s2 = userTask.title;
        string s3 = userTask.group;
        string fullStr = s1 + " " + s2  + " " + s3;

        EXPECT_EQ(fullStr, "W Groceries Shopping");
}


TEST(IndivConstruct, CheckComplete){
	IndivTask userTask("W", false, "Groceries", "Shopping");
	userTask.markComplete(1);

	EXPECT_EQ(userTask.complete, true);
}
#endif //__INDIV_TEST_HPP__
