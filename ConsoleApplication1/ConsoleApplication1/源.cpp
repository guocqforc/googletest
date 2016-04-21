#include<iostream>
using namespace std;
#include <gtest/gtest.h>

int Foo(int a, int b)
{
	if (a == 0 || b == 0)
	{
		throw "don't do that";
	}
	int c = a % b;
	if (c == 0)
		return b;
	return Foo(b, c);
}

TEST(FooTest, HandleNoneZeroInput)
{
	EXPECT_EQ(2, Foo(4, 10));
	EXPECT_EQ(6, Foo(30, 18));
}
TEST(FooTests, cesh)
{
	EXPECT_EQ(2, Foo(4, 10));
	
}

int main(int argc, char* argv[])
{
	testing::GTEST_FLAG(output) = "xml:";
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	getchar();
	return 0;
}