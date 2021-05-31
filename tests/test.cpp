#ifndef __TEST_HPP__
#define __TEST_HPP__

#include "gtest/gtest.h"
#include "sort_ascendingtest.hpp"
#include "indivtask_test.hpp"
#include "../src/indivtask.cpp"
//#include "sort_descendingtests.hpp"

#include <string>


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

#endif //_TEST_HPP_
