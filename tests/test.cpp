#ifndef __TEST_HPP__
#define __TEST_HPP__

#include "gtest/gtest.h"
#include "../src/indivtask.cpp"
#include "../src/sortdescending.cpp"
#include "../src/sortascending.cpp"
#include "sort_ascendingtest.hpp"
#include "sort_descendingtests.hpp"
#include "indivtask_test.hpp"
//#include "sort_randomtest.hpp"

#include <string>


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

#endif //_TEST_HPP_
