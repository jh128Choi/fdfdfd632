#include "pch.h"
#include "../CRA_TDD/cal.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(CalTest, Minus) {
	int ret = getMinus(5, 3);
	EXPECT_EQ(2, ret);
}