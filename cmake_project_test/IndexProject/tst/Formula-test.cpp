#include "gtest/gtest.h"
#include "Formula.h"

TEST(blaTest, test1){
    //arrange
    //act
    //assert
    EXPECT_EQ(Formula::bla(0),0);
    EXPECT_EQ(Formula::bla(2),4);
    EXPECT_EQ(Formula::bla(4),6);
}