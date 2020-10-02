#include "ipl.h"
#include "cricket.h"
#include "iop.h"
#include <gtest/gtest.h>
namespace {

class ipltest : public ::testing::Test {

protected:
  void SetUp() { // override {
    ptr = new ipl(335988,"Kings XI Punjab","Chennai Super Kings","4/19/2008",2008,"Punjab Cricket Association Stadium,Mohali","Chandigarh","India","Chennai Super Kings","Chennai Super Kings","bat","runs","Result","MEK Hussey");
  
  }
  void TearDown() {
    delete ptr;
  }
  cricket *ptr;  
};

TEST_F(ipltest, DefaultConstructor) {
  ipl ft;
  EXPECT_EQ(0, ft.getmatchid());
  EXPECT_EQ(0, ft.getseasonyear());
  EXPECT_EQ(0, ft.getteam1().length());
  EXPECT_EQ(0, ft.getteam2().length());
  EXPECT_EQ(0, ft.getmatchdate().length());
  EXPECT_EQ(0, ft.getman_of_match().length());
  EXPECT_EQ(0, ft.getvenue().length());
  EXPECT_EQ(0, ft.gettoss_Winner().length());
  EXPECT_EQ(0, ft.getmatch_winner().length());
  
}
TEST_F(ipltest, ParameterizedConstructor) {
  ipl *fptr = dynamic_cast<ipl*>(ptr);
  EXPECT_EQ(335988, fptr->getmatchid());
  EXPECT_EQ(2008, fptr->getseasonyear());
  EXPECT_STREQ("Kings XI Punjab", fptr->getteam1().c_str());
  EXPECT_STREQ("Chennai Super Kings", fptr->getteam2().c_str());
  EXPECT_STREQ("4/19/2008", fptr->getmatchdate().c_str());
  EXPECT_STREQ("MEK Hussey", fptr->getman_of_match().c_str());
  EXPECT_STREQ("Punjab Cricket Association Stadium,Mohali", fptr->getvenue().c_str());
  EXPECT_STREQ("Chennai Super Kings", fptr->gettoss_Winner().c_str());
  EXPECT_STREQ("Chennai Super Kings", fptr->getmatch_winner().c_str());
  
}
}
/*
int main(int argc,char **argv)
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}*/
