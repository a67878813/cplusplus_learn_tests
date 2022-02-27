// #include <gtest/gtest.h>
// #include "src/Formula.h"
#include <iostream>
// Demonstrate some basic assertions.
// TEST(HelloTest, BasicAssertions) {
//   // Expect two strings not to be equal.
//   EXPECT_STRNE("hello", "world");
//   // Expect equality.
//   EXPECT_EQ(7 * 6, 42);
// }


#include "gtest/gtest.h"
#include "sqrt.hpp"
TEST(SquareRootTest, PositiveNos){
    //arrange
    //act
    //assert
    ASSERT_EQ(6,squareRoot(36.0));
    ASSERT_EQ(18.0,squareRoot(324.0));
    ASSERT_EQ(25.4,squareRoot(645.16));
    ASSERT_EQ(8.0,squareRoot(64.0));
};
TEST(SquareRootTest, NegtiveNos){
    //arrange
    //act
    //assert
    ASSERT_EQ(-1.0,squareRoot(-15.0));
    ASSERT_EQ(-1.0,squareRoot(-0.2));
};
/* int main(){
  int c = Formula::bla(0);
  std::cout << "out value = "<< c  << std::endl;
} */
int main(int argc, char** argv){
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}