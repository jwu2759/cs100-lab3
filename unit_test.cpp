#include "gtest/gtest.h"

#include "op_test.hpp"
#include "add_test.hpp"
#include "sub_test.hpp"
<<<<<<< HEAD
#include "pow_test.hpp"
=======
#include "div_test.hpp"
>>>>>>> abd8a220fd2eb2d914e6d96f75d29bdcbc31a136

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
