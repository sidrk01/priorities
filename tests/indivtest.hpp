#ifndef __INDIV_TEST_HPP__
#define __INDIV_TEST_HPP__

#include "../src/indivtask.cpp"
#include <string>

TEST(IndivConstruct, NewTask){
	Task* userTask = new IndivTask("M", false, "Math","Homework");
	string s1 = userTask->daysOfWeek;
	string s2 = userTask->title;
	string s3 = userTask->group;
	string fullStr = s1 + " " + s2  + " " + s3;
	
	EXPECT_EQ(fullStr, "M Math Homework");
}


#endif //__INDIV_TEST_HPP__
