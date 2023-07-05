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

TEST(cal, add)
{
	for(int i = 0; i < 10; ++i)
	{
		int a = rand() % 1000;
		int b = rand() % 1000;
		EXPECT_EQ(getSum(a, b), (a + b));
	}
}

TEST(TestCaseName, GopTest) {
	for (int i = 1; i < 20; ++i)
	{
		for (int j = 1; j < 20; ++j)
		{
			EXPECT_EQ(getGop(i, j), i * j);
		}
	}
}

TEST(CalTest, Minus) {
	int ret = getMinus(5, 3);
	EXPECT_EQ(2, ret);
}
