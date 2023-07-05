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

TEST(TestCaseName, DivideTest) {
	EXPECT_EQ(getDivide(20, 4), 5);
	EXPECT_EQ(getDivide(200, 4), 50);
	EXPECT_EQ(getDivide(20, 2), 10);
	EXPECT_EQ(getDivide(20, 1), 20);
	EXPECT_EQ(getDivide(20, 10), 2);
	EXPECT_EQ(getDivide(120, 4), 30);
	EXPECT_EQ(getDivide(2000, 500), 4);
}

TEST(CalTest, Minus) {
	int ret = getMinus(5, 3);
	EXPECT_EQ(2, ret);
}

TEST(TestCaseName, getSumSumTest)
{
	EXPECT_EQ(6, getSumSum(1,2,3));
}