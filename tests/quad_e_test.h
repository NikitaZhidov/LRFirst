#ifndef QUAD_H
#define QUAD_H

#include <gtest/gtest.h>

extern "C" {
#include "quadratic_e.h"
}

TEST(quad_eTest_p, positive1) {
    ASSERT_EQ(quad_e(1, 3, -4), -3);
}

TEST(quad_eTest_n, negative1){
    ASSERT_EQ(quad_e(0, 1, 1), -1);
}

TEST(quad_eTest_n, negative2){
    ASSERT_EQ(quad_e(0, 0, 5), 5);
}

TEST(quad_eTest_n, negative3){
    ASSERT_EQ(quad_e(-2, 0, 0), 0);
}

TEST(quad_eTest_n, negativ4){
    ASSERT_EQ(quad_e(1, 3, 4), 0);
}
#endif

