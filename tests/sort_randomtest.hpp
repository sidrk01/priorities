#ifndef __SORT_RANDOMTEST_HPP__
#define __SORT_RANDOMTEST_HPP___


#include "../header/indivtask.hpp"
#include "../header/sortrandom.hpp"
#include "iostream"
#include <string>
using namespace std;

 TEST(SortRandom, SortRand){
  	//---- testing sort_rand:	
	 vector<Task*> userTasks;
	 Task* task1 = new IndivTask("ynnnnnn", "Math");
	 Task* task2 = new IndivTask("ynnnnnn", "Math");
	 userTasks.push_back(task1);
	 userTasks.push_back(task2);

	 Strategy* init = new Strategy(userTasks); 		
	 Sort_Random* checkComp = new Sort_Random(1, init);
	
	EXPECT_EQ(checkComp->organize(), true);
}	


/*
 * TEST(SortRandom, SortRand{
 *  	//----organize() returns true        
 *  	        EXPECT_EQ(fullStr, "M Math");   
 *  	        }
 *  	         
 *  	   
*/
 
/*
TEST(SortRandom, SortRand{
	//----------size of vector<Tasks*> stays same after calling organize
	//	         
	//	              EXPECT_EQ(fullStr, "M Math");   
	//	              }
	//
		                                
*/
	
#endif //__SORT_RANDOMTEST_HPP__
