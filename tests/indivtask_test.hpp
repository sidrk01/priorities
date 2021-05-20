#ifndef __INDIVTASK_TEST_HPP__
#define __INDIVTASK_TEST_HPP__

#include "../src/indivtask.cpp"
#include <string>

TEST(IndivConstruct, GroupTask){
	const int SIZE = 7;	
	bool days[] = {true,false,false,false,false,false,false};
 	IndivTask userTask(days, SIZE, "Math", "Homework");
	string s1 = userTask.daysOfWeek;
	string s2 = userTask.title;
	string s3 = userTask.group;
	string fullStr = s1 + " " + s2  + " " + s3;
	
	EXPECT_EQ(fullStr, "M Math Homework");	
}


TEST(IndivConstruct, NonGroupTask){
	const int SIZE = 7; 
        bool days[] = {false,false,true,false,true,false,true};
        IndivTask userTask(days, SIZE, "Biology", "");
        string s1 = userTask.daysOfWeek;
        string s2 = userTask.title;
        string s3 = userTask.group;
        string fullStr = s1 + " " + s2  + " " + s3;

        EXPECT_EQ(fullStr, "WFSu Biology ");
}

#endif //__INDIVTASK_TEST_HPP__
