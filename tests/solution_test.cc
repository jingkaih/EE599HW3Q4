#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <string>

TEST(CheckBracketsShould, ReturnTrue) {
  Solution solution;
  std::string mystr = "a[{1}d]=[.(){f}]/s";
  bool actual = solution.CheckBrackets(mystr);
  bool expected = true;
  EXPECT_EQ(expected, actual);
}

TEST(CheckBracketsShould, ReturnFalse) {
  Solution solution;
  std::string mystr = "a[{1}=[.(){f}]/s";
  bool actual = solution.CheckBrackets(mystr);
  bool expected = false;
  EXPECT_EQ(expected, actual);
}

TEST(CheckBracketsShould, ReturnFalseAsWell) {
  Solution solution;
  std::string mystr = "a[{1}=[.(]){f}]/s";
  bool actual = solution.CheckBrackets(mystr);
  bool expected = false;
  EXPECT_EQ(expected, actual);
}