// #include <gtest/gtest.h>
#include "src/Formula.h"
#include <iostream>
// Demonstrate some basic assertions.
// TEST(HelloTest, BasicAssertions) {
//   // Expect two strings not to be equal.
//   EXPECT_STRNE("hello", "world");
//   // Expect equality.
//   EXPECT_EQ(7 * 6, 42);
// }

#include "gtest/gtest.h"
TEST(blaTest, test1){
    //arrange
    //act
    //assert
    EXPECT_EQ(Formula::bla(0),0);
    EXPECT_EQ(Formula::bla(2),4);
    EXPECT_EQ(Formula::bla(4),6);
};

/* int main(){
  int c = Formula::bla(0);
  std::cout << "out value = "<< c  << std::endl;
} */
int main(int argc, char** argv){
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}