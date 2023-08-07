#include "pch.h"
#include "..\IsEqual.cpp"

TEST(TestCaseName1, TestName1)
{
	bool x = areEqual("REUBEN", "reuben", true);
	bool y = true;
	EXPECT_EQ(y,x);
}

TEST(TestCaseName1, TestName2)
{
	bool x = areEqual("REU9BEN", "reu9ben", true);
	bool y = true;
	EXPECT_EQ(y,x);
}

TEST(TestCaseName2, TestName3)
{
	bool x = areEqual("REU9BEN", "reu9ben", false);
	bool y = false;
	EXPECT_EQ(y,x);
}

TEST(TestCaseName2, TestName4)
{
	bool x = areEqual("REUBEN", "reuben", false);
	bool y = false;
	EXPECT_EQ(y,x);
}

TEST(TestCaseName3, TestName5)
{
	bool x = areEqual("98", "98", true);
	bool y = true;
	EXPECT_EQ(y,x);
}

TEST(TestCaseName4, TestName6){
	bool x = areEqual(" ", " ", true);
	bool y = true;
	EXPECT_EQ(y,x);
}
TEST(TestCaseName4, TestName7){
	bool x = areEqual("", "", true);
	bool y = true;
	EXPECT_EQ(y,x);
}
TEST(TestCaseName5, TestName8){
	bool x = areEqual("red red", "RED RED", true);
	bool y = true;
	EXPECT_EQ(y,x);
}

TEST(TestCaseName6, TestName9){
	EXPECT_EQ(1, displayResult(true));
}
TEST(TestCaseName6, TestName10){
	EXPECT_EQ(2, displayResult(false));
}


