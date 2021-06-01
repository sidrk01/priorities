#ifndef __SORT_ASCENDING_TEST_HPP__
#define __SORT_ASCENDING_TEST_HPP__

#include "../header/indivtask.hpp"
#include "../header/sortascending.hpp"
#include "../header/sortdescending.hpp"
#include "../header/sortrandom.hpp"

#include "iostream"
using namespace std;

TEST(SortDescending, IdComplete){
        Task* u1 = new IndivTask("ynnnnnn", "Math");
        Task* u2 = new IndivTask("ynnnnnn", "Math");

        Strategy* init = new Strategy();
	init->todo.push_back(u1);
	init->todo.push_back(u2);
        Sort_Descending* user1 = new Sort_Descending(4, init);
	user1->organize();
        EXPECT_EQ(init->todo.at(0), u2);
}

TEST(SortAscending, IdComplete){
	Task* u1 = new IndivTask("ynnnnnn", "Math");
        Task* u2 = new IndivTask("ynnnnnn", "Math");

        Strategy* init = new Strategy();
	init->todo.push_back(u1);
        init->todo.push_back(u2);
        Sort_Ascending* checkComp = new Sort_Ascending(4, init);
        checkComp->organize();
        EXPECT_EQ(init->todo.at(0), u1);
}


TEST(SortAscendingTests, NoneComplete){
	Task* task1 = new IndivTask("ynnnnnn", "Math");
	Task* task2 = new IndivTask("ynnnnnn", "Math");
	
	Strategy* init = new Strategy();
	init->todo.push_back(task1);
        init->todo.push_back(task2);
	Sort_Ascending* checkComp = new Sort_Ascending(1, init);

	EXPECT_EQ(checkComp->organize(), true); 
}

TEST(SortAscending, CheckNoneComplete){
        Task* task1 = new IndivTask("ynnnnnn", "Math");
        Task* task2 = new IndivTask("ynnnnnn", "Math");

        Strategy* init = new Strategy();
	init->todo.push_back(task1);
        init->todo.push_back(task2);
        Sort_Ascending* checkComp = new Sort_Ascending(1, init);
	checkComp->organize();
        
	EXPECT_EQ(init->todo.at(0), task2);
}

TEST(SortAscending, CheckOneComplete){
	Task* task1 = new IndivTask("ynnnnnn", "Math");
        Task* task2 = new IndivTask("ynnnnnn", "Math");
        Task* task3 = new IndivTask("ynnnnnn", "Math");

	task3->markComplete(task3->id);

        Strategy* init = new Strategy();
	init->todo.push_back(task1);
        init->todo.push_back(task2);
	init->todo.push_back(task3);
        Sort_Ascending* checkComp = new Sort_Ascending(1, init);
	checkComp->organize();
 
       EXPECT_EQ(init->todo.at(2), task1);
}


TEST(SortAscending, CheckTwoComplete){
        Task* task1 = new IndivTask("ynnnnnn", "Math");
        Task* task2 = new IndivTask("ynnnnnn", "Math");
        Task* task3 = new IndivTask("ynnnnnn", "Math");

	task1->markComplete(task1->id);

        Strategy* init = new Strategy();
	init->todo.push_back(task1);
        init->todo.push_back(task2);
        init->todo.push_back(task3);
        Sort_Ascending* checkComp = new Sort_Ascending(1, init);
	checkComp->organize();
        EXPECT_EQ(init->todo.at(0), task1);
}

TEST(SortAscending, TitleSort1){        
        Task* task1 = new IndivTask ("ynnnnnn", "Math");
        Task* task2 = new IndivTask ("ynnnnnn", "Math");

        Strategy* init = new Strategy();
	init->todo.push_back(task1);
        init->todo.push_back(task2);
        Sort_Ascending* checkComp = new Sort_Ascending(3, init);
        checkComp->organize();
	EXPECT_EQ(init->todo.at(0), task1);
	
}

TEST(SortAscending, TitleSort2){
        Task* task1 = new IndivTask("ynnnnnn", "Math");
        Task* task2 = new IndivTask("ynnnnnn", "Math");
        Task* task3 = new IndivTask("yynnnnn", "English");

        Strategy* init = new Strategy();
	init->todo.push_back(task1);
        init->todo.push_back(task2);
        init->todo.push_back(task3);
        Sort_Ascending* checkComp = new Sort_Ascending(3, init);
        checkComp->organize();

        EXPECT_EQ(init->todo.at(0), task3);
} 

TEST(SortAscending, daysofWeekSort){
	Task* task1 = new IndivTask("yyynnnn", "Math");
	Task* task2 = new IndivTask("yyynnnn", "Math");
	Task* task3 = new IndivTask("yynnnnn", "Math");

	Strategy* init = new Strategy();
	init->todo.push_back(task1);
        init->todo.push_back(task2);
        init->todo.push_back(task3);
        Sort_Ascending* checkComp = new Sort_Ascending(2, init);
        checkComp->organize();

	EXPECT_EQ(init->todo.at(0)->daysOfWeek, "MT"); 
}

TEST(SortAscending, noneofWeekSort){
	Strategy* init = new Strategy();
	Sort_Ascending* checkComp = new Sort_Ascending(2, init);
	
	EXPECT_ANY_THROW(checkComp->organize());	
}
	
TEST(SortDescending, CheckNoneComplete){
        Task* task1 = new IndivTask("ynnnnnn", "Math");
        Task* task2 = new IndivTask("ynnnnnn", "Math");

        Strategy* init = new Strategy();
	init->todo.push_back(task1);
        init->todo.push_back(task2);
        Sort_Descending* sort1 = new Sort_Descending(1, init);
        sort1->organize();

        EXPECT_EQ(init->todo.at(0), task1);
}

TEST(SortDescending, CheckOneComplete){
        Task* task1 = new IndivTask("ynnnnnn", "Math");
        Task* task2 = new IndivTask("ynnnnnn", "Math");
        Task* task3 = new IndivTask("ynnnnnn", "Math");

	task3->markComplete(task3->id);

        Strategy* init = new Strategy();
	init->todo.push_back(task1);
        init->todo.push_back(task2);
        init->todo.push_back(task3);
        Sort_Descending* user1 = new Sort_Descending(1, init);
	user1->organize();
 
       EXPECT_EQ(init->todo.at(0), task3);
}


TEST(SortDescending, CheckTwoComplete){
        Task* task1 = new IndivTask("ynnnnnn", "Math");
        Task* task2 = new IndivTask("ynnnnnn", "Math");
        Task* task3 = new IndivTask("ynnnnnn", "Math");

	task1->markComplete(task1->id);

        Strategy* init = new Strategy();
	init->todo.push_back(task1);
        init->todo.push_back(task2);
        init->todo.push_back(task3);
        Sort_Descending* user1 = new Sort_Descending(1, init);
	user1->organize();
        EXPECT_EQ(init->todo.at(0), task1);
}

TEST(SortDescending, TitleSort){
	Task* task1 = new IndivTask("ynnnnnn", "Math");
        Task* task2 = new IndivTask("yynnnnn", "Zebra");

        Strategy* init = new Strategy();
	init->todo.push_back(task1);
        init->todo.push_back(task2);
	Sort_Descending* checkComp = new Sort_Descending(3, init);
	checkComp->organize();
	EXPECT_EQ(init->todo.at(0), task2);	
}

TEST(SortDescending, noneWeekSort){
        Strategy* init = new Strategy();
        Sort_Descending* checkComp = new Sort_Descending(2, init);

        EXPECT_ANY_THROW(checkComp->organize());
}



TEST(SortRandom, SortRand){
        //---- testing sort_rand:       
        Task* task1 = new IndivTask("ynnnnnn", "Math");
        Task* task2 = new IndivTask("ynnnnnn", "Math");
  
        Strategy* init = new Strategy();
	init->todo.push_back(task1);
        init->todo.push_back(task2);
        Sort_Random* checkComp = new Sort_Random(1, init);
        
        EXPECT_EQ(checkComp->organize(), true);
}

TEST(SortRandom, Size){
        Task* task1 = new IndivTask("ynnnnnn", "Math");
        Task* task2 = new IndivTask("ynnnnnn", "Math");

        Strategy* init = new Strategy();
	init->todo.push_back(task1);
        init->todo.push_back(task2);
        Sort_Random* checkComp = new Sort_Random(1, init);
	checkComp->organize();
        EXPECT_EQ(init->todo.size(),2);
}
#endif //__SORT_ASCENDING_TEST_HPP__
