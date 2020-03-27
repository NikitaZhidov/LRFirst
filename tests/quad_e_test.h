#ifndef QUAD_H
#define QUAD_H

#include <gtest/gtest.h>

extern "C" {
#include "quadratic_e.h"
}

TEST(quad_eTest, num0) {
    ASSERT_EQ(quad_e(1, 3, -4), -3);
}

#endif

