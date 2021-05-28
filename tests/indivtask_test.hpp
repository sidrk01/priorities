#ifndef __INDIVTASK_TEST_HPP__
#define __INDIVTASK_TEST_HPP__

#include <string>
#include "../header/indivtask.hpp"

TEST(IndivConstruct, OneDayOfWeek){
 	IndivTask userTask("ynnnnnn", "Math");
	string s1 = userTask.daysOfWeek;
	string s2 = userTask.title;
	string fullStr = s1 + " " + s2;
	
	EXPECT_EQ(fullStr, "M Math");	
}


TEST(IndivConstruct, MulipleDaysOfWeek){
        IndivTask userTask("nnynnyy", "Biology");
        string s1 = userTask.daysOfWeek;
        string s2 = userTask.title;
        string fullStr = s1 + " " + s2;

	EXPECT_EQ(fullStr, "WSU Biology");
}

TEST(IndivComplete, NoneComplete){
	IndivTask userTask("nnynnyy", "Biology");
	IndivTask userTask2("nnynnyy", "Biology");

	EXPECT_EQ(userTask.complete, false);
}

TEST(IndivComplete, OneComplete){
        IndivTask userTask("nnynnyy", "Biology");
        IndivTask userTask2("nnynnyy", "Biology");

	userTask.markComplete();

        EXPECT_EQ(userTask.complete, true);
}
#endif //__INDIVTASK_TEST_HPP__
