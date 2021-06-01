#ifndef __STRATEGY_TEST_HPP__
#define __STRATEGY_TEST_HPP__

#include "../header/strategy.hpp"

TEST(StrategyPrint, TableSet){
	vector<Task*> userTasks;
	Task* task1 = new IndivTask("ynnnnny", "ABDOMINOHYSTERECTOMY");
	Task* task2 = new IndivTask("ynnyyyn", "ACETYLMETHYLCARBINOL");
	Task* task3 = new IndivTask("yyyyyyy", "Math");
	Task* task4 = new IndivTask("yyyyyyy", "Biology");
	userTasks.push_back(task1);
	userTasks.push_back(task2);
	userTasks.push_back(task3);
	userTasks.push_back(task4);
	
	Strategy* init = new Strategy(userTasks);

	EXPECT_EQ(init->print(), true);
}

TEST(StrategyPrint, TableSet1){
	vector<Task*> userTasks;
        Task* task1 = new IndivTask("ynnnyyy", "Literature");
        Task* task2 = new IndivTask("ynnyyyn", "Sports");
        Task* task3 = new IndivTask("yyyyyyy", "Math");
        Task* task4 = new IndivTask("yyyyyyy", "Biology");
        userTasks.push_back(task1);
        userTasks.push_back(task2);
        userTasks.push_back(task3);
        userTasks.push_back(task4);

        Strategy* init = new Strategy(userTasks);

        EXPECT_EQ(init->print(), true);
}

TEST(StrategyPrint, TableSet3){
	vector<Task*> userTasks;
        Task* task1 = new IndivTask("yyyyyyy", "L");
        Task* task2 = new IndivTask("nnnnnnn", "S");
        Task* task3 = new IndivTask("yyyyyyy", "M");
        Task* task4 = new IndivTask("nnnnnnn", "ABDOMINOHYSTERECTOMY");
        userTasks.push_back(task1);
        userTasks.push_back(task2);
        userTasks.push_back(task3);
        userTasks.push_back(task4);

        Strategy* init = new Strategy(userTasks);

        EXPECT_EQ(init->print(), true);
}
#endif //__STRATEGY_TEST_HPP__
