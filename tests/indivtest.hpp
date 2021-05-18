#ifndef __INDIV_TEST_HPP__
#define __INDIV_TEST_HPP__

#include "../src/indivtask.cpp"
#include <string>

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


#endif //__INDIV_TEST_HPP__
