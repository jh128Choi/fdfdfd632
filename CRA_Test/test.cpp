#include "pch.h"
#include "../CRA_TDD/cal.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, ZegopTest1)
{
	int res = getZegop(5);
	EXPECT_EQ(25, res);
}

TEST(TestCaseName, ZegopTest2)
{
	int res = getZegop(-5);
	EXPECT_EQ(25, res);
}
