#ifndef __STRATEGY_TEST_HPP__
#define __STRATEGY_TEST_HPP__

#include "../header/strategy.hpp"

TEST(StrategyPrint, TableSet){
	Task* task1 = new IndivTask("ynnnnny", "ABDOMINOHYSTERECTOMY");
	Task* task2 = new IndivTask("ynnyyyn", "ACETYLMETHYLCARBINOL");
	Task* task3 = new IndivTask("yyyyyyy", "Math");
	Task* task4 = new IndivTask("yyyyyyy", "Biology");
	
	Strategy* init = new Strategy();
	init->todo.push_back(task1);
        init->todo.push_back(task2);
        init->todo.push_back(task3);
        init->todo.push_back(task4);

	EXPECT_EQ(init->print(), true);
}

TEST(StrategyPrint, TableSet1){
        Task* task1 = new IndivTask("ynnnyyy", "Literature");
        Task* task2 = new IndivTask("ynnyyyn", "Sports");
        Task* task3 = new IndivTask("yyyyyyy", "Math");
        Task* task4 = new IndivTask("yyyyyyy", "Biology");

        Strategy* init = new Strategy();
	init->todo.push_back(task1);
        init->todo.push_back(task2);
        init->todo.push_back(task3);
        init->todo.push_back(task4);

        EXPECT_EQ(init->print(), true);
}

TEST(StrategyPrint, TableSet3){
        Task* task1 = new IndivTask("yyyyyyy", "L");
        Task* task2 = new IndivTask("nnnnnnn", "S");
        Task* task3 = new IndivTask("yyyyyyy", "M");
        Task* task4 = new IndivTask("nnnnnnn", "ABDOMINOHYSTERECTOMY");

        Strategy* init = new Strategy();
	init->todo.push_back(task1);
        init->todo.push_back(task2);
        init->todo.push_back(task3);
        init->todo.push_back(task4);

        EXPECT_EQ(init->print(), true);
}
#endif //__STRATEGY_TEST_HPP__
