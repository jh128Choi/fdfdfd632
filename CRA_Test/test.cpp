#include "pch.h"
#include "../CRA_TDD/cal.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}


TEST(cal, add)
{
	for(int i = 0; i < 10; ++i)
	{
		int a = rand() % 1000;
		int b = rand() % 1000;
		EXPECT_EQ(getSum(a, b), (a + b));

TEST(TestCaseName, GopTest) {
	for (int i = 1; i < 20; ++i)
	{
		for (int j = 1; j < 20; ++j)
		{
			EXPECT_EQ(getGop(i, j), i * j);
		}
	}
}