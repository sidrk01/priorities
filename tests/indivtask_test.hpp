#ifndef __INDIVTASK_TEST_HPP__
#define __INDIVTASK_TEST_HPP__

#include <string>
#include "../header/indivtask.hpp"

TEST(IndivID, MultTasks){
	Task* userTask = new IndivTask("nnynnyy", "Biology");
        Task* userTask1 = new IndivTask("nnynnyy", "Astrology");

        EXPECT_EQ(userTask1->id, 2);

}

TEST(IndivConstruct, OneDayOfWeek){
 	Task* userTask = new IndivTask("ynnnnnn", "Math");
	string s1 = userTask->daysOfWeek;
	string s2 = userTask->title;
	string fullStr = s1 + " " + s2;
	
	EXPECT_EQ(fullStr, "M Math");	
}


TEST(IndivConstruct, MulipleDaysOfWeek){
        Task* userTask = new IndivTask("nnynnyy", "Biology");
        string s1 = userTask->daysOfWeek;
        string s2 = userTask->title;
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

TEST(IndivID, MultTasks){
	Task* userTask = new IndivTask("nnynnyy", "Biology");
	Task* userTask1 = new IndivTask("nnynnyy", "Biology");
		

        EXPECT_EQ(userTask1->id, 2);
}
#endif //__INDIVTASK_TEST_HPP__
