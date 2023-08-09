#include "pch.h"
#include <iostream>
#include "..\Solution1_2\DuplicateChar.cpp"
TEST(TestCaseName1, TestName1) {
	char text[] = "Reuben";
	char text1[] = "Reubn";
	removeDuplicates(text);
	//std::cout << text << " " << text1 << std::endl;
	EXPECT_STREQ(text1, text);
}
TEST(TestCaseName1, TestName2) {
	char text[] = "REBEREXB";
	char text1[] = "REBX";
	removeDuplicates(text);
	//std::cout << text << " " << text1 << std::endl;
	EXPECT_STREQ(text1, text);
}
TEST(TestCaseName2, TestName3) {
	char text[] = "9845498";
	char text1[] = "9845";
	removeDuplicates(text);
	//std::cout << text << " " << text1 << std::endl;
	EXPECT_STREQ(text1, text);
}
TEST(TestCaseName2, TestName4) {
	char text[] = "Reu@ben@";
	char text1[] = "Reu@bn";
	removeDuplicates(text);
	//std::cout << text << " " << text1 << std::endl;
	EXPECT_STREQ(text1, text);
}
TEST(TestCaseName3, TestName5) {
	char text[] = "";
	char text1[] = "";
	removeDuplicates(text);
	//std::cout << text << "-" << text1 << "-" << std::endl;
	EXPECT_STREQ(text1, text);
}
TEST(TestCaseName3, TestName6) {
	char text[] = "  ";
	char text1[] = " ";
	removeDuplicates(text);
	//std::cout << text << "-" << text1 << "-" << std::endl;
	EXPECT_STREQ(text1, text);
}
//TEST(TestCaseName4, TestName7) {
//	char text[] = "Reubren";
//	char text1[] = "Reubn";
//	removeDuplicates(text);
//	std::cout << text << " " << text1 << std::endl;
//	EXPECT_STREQ(text1, text);
//}
TEST(TestCaseName4, TestName8) {
	char text[] = "Reuben is new here";
	char text1[] = "Reubn iswhr";
	removeDuplicates(text);
	std::cout << text << " " << text1 << std::endl;
	EXPECT_STREQ(text1, text);
}
//TEST(TestCaseName5, TestName9) {
//	char text[] = "Reuben";
//	char text1[] = "Reubn";
//	removeDuplicates(text);
//	//std::cout << text << " " << text1 << std::endl;
//	EXPECT_STREQ(text1, text);
//}
//TEST(TestCaseName5, TestName10) {
//	char text[] = "Reuben";
//	char text1[] = "Reubn";
//	removeDuplicates(text);
//	//std::cout << text << " " << text1 << std::endl;
//	EXPECT_STREQ(text1, text);
//}