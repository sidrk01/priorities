#ifndef __INDIVTASK_TEST_HPP__
#define __INDIVTASK_TEST_HPP__

#include "../src/indivtask.cpp"
#include <string>

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

#endif //__INDIVTASK_TEST_HPP__
