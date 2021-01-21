CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(test
    unit_test.cpp
    op_test.hpp
    add_test.hpp
    sub_test.hpp
<<<<<<< HEAD
    pow_test.hpp
=======
    div_test.hpp
>>>>>>> abd8a220fd2eb2d914e6d96f75d29bdcbc31a136
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)

