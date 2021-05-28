#ifndef __TEST_HPP__
#define __TEST_HPP__

#include "gtest/gtest.h"
<<<<<<< HEAD
#include "indivtest.hpp"
#include "sort_ascendingtest.hpp"
=======
#include "indivtask_test.hpp"
>>>>>>> 8a210df59f84ea041af4abc909994519e8b4f47d

#include <string>


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

#endif //_TEST_HPP_
