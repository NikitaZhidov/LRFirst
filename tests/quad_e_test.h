#ifndef QUAD_H
#define QUAD_H

#include <gtest/gtest.h>

extern "C" {
#include "quadratic_e.h"
}

TEST(quad_eTest_p, positive1) {
    double x1;
    double x2;
    ASSERT_EQ(quad_e(1, 3, -4, &x1, &x2), 2);
    ASSERT_EQ(x1, 1);
    ASSERT_EQ(x2, -4);
}

TEST(quad_eTest_n, negative1){
    double x1;
    double x2;
    ASSERT_EQ(quad_e(0, 1, 1, &x1, &x2), 1);
    ASSERT_EQ(x1, -1);
    ASSERT_EQ(x2, 0);
}

TEST(quad_eTest_n, negative2){
    double x1;
    double x2;
    ASSERT_EQ(quad_e(0, 0, 5, &x1, &x2), 0);
    ASSERT_EQ(x1, 0);
    ASSERT_EQ(x2, 0);
}

TEST(quad_eTest_n, negative3){
    double x1;
    double x2;
    ASSERT_EQ(quad_e(-2, 0, 0, &x1, &x2), 1);
    ASSERT_EQ(x1, 0);
    ASSERT_EQ(x2, 0);
}

TEST(quad_eTest_n, negativ4){
    double x1;
    double x2;
    ASSERT_EQ(quad_e(1, 3, 4, &x1, &x2), 0);
    ASSERT_EQ(x1, 0);
    ASSERT_EQ(x2, 0);
}
#endif

