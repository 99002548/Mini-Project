#include "cricket.h"
#include "ipl.h"

#include <bits/stdc++.h>
using namespace std;
#include <list>
#include <iterator>
#include <gtest/gtest.h>
namespace 
{

class  ipltest : public ::testing::Test 
	{

		protected:
  		
  			void SetUp() 
  			{ 
  
		  		std::list<string> res;
		     		std::list<string> ::iterator iter;
		     		int match_id,season_Year;
                               std::string team1,team2,match_date,venue_Name,city_Name,country_Name,toss_Winner,match_winner,toss_Name,win_Type,outcome_Type,man_of_the_match;
                               std::string S, T;
		    		fstream fin;
		    		int count=1;
		    		fin.open("match1.csv", ios::in);
		    		while(getline(fin, S))
		    		{
		    			stringstream X(S);
		    			while (getline(X, T,'\n'))
		   			 {
		   	 			res.push_back(T);
		    			 }
		   	        }
		    		iter=res.begin();
		   		 ++iter;
		    		for(;iter!=res.end();++iter)
		    		{
		    			stringstream ss(*iter); 
		    			while (ss.good()) 
		    			{ 
						string substr; 
						getline(ss, substr, ','); 
						//cout<<substr<<"  "<<endl;
						switch(count)
						{
							case 1:
								match_id=std::stoi(substr);
								break;
							
							case 2:
								team1=substr;
								break;
							case 3:
								team2=substr;
								break;
							case 4:
								match_date=substr;
								break;
						        case 5:
								season_Year=std::stoi(substr);
								break;
								
							case 6:venue_Name=substr;
								break;
								
							case 7:city_Name=substr;
								break;
								
							case 8: country_Name=substr;
								break;
								
							case 9: toss_Winner=substr;
								break;
								
							case 10:
								match_winner=substr;
								break;	
								
							case 11:
								toss_Name=substr;
								break;	
								
							case 12:
								win_Type=substr;
								break;
							case 13:
								outcome_Type=substr;
								break;
					               case 14:
								man_of_the_match=substr;
				ptr = new ipl(match_id,team1,team2,match_date,season_Year,venue_Name,city_Name,country_Name,toss_Winner,match_winner,toss_Name,win_Type,outcome_Type,man_of_the_match);
								
								match_id=0;season_Year=0;team1="";team2="";match_date="";venue_Name="";
								city_Name="";country_Name="";toss_Winner="";match_winner="";toss_Name="";win_Type="";outcome_Type="";man_of_the_match="";count=0;
						
						
						}
						++count;
						
		    			} 
		  		}
    
 
 			 }
 			 
  void TearDown() 
  {
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

TEST_F(ipltest, toss_match_won) {
  ipl *ft=dynamic_cast<ipl*>(ptr);
  EXPECT_EQ(true,ft->toss_match_won("Mumbai Indians"));
  }
 
 TEST_F(ipltest, opearatoroverloading) {
  ipl *ft=dynamic_cast<ipl*>(ptr);
  ipl ft2(1082650,"Mumbai Indians","Rising Pune Supergiants","5/21/2017",2017,"Rajiv Gandhi International Stadium Uppal","Hyderabad (Deccan)","India","Mumbai Indians","Mumbai Indians","Bat","run","Result","KH Pandya");
  ipl ft1(335989,"Delhi Daredevils","Rajasthan Royals","4/19/2008",2008,"Feroz Shah Kotla","Delhi","India","Rajasthan Royals","Delhi Daredevils","bat","wickets","Result","MF Maharoof");
  EXPECT_EQ(false,ft1>ft2);
  } 

TEST_F(ipltest, ParameterizedConstructor) {
  ipl *fptr = dynamic_cast<ipl*>(ptr);
  EXPECT_EQ(1082650, fptr->getmatchid());
  EXPECT_EQ("Mumbai Indians",fptr->getteam1());
  EXPECT_EQ("Rising Pune Supergiants",fptr->getteam2());
  EXPECT_EQ("5/21/2017", fptr->getmatchdate());
   EXPECT_EQ(2017, fptr->getseasonyear());
   EXPECT_EQ("Rajiv Gandhi International Stadium",fptr->getvenue());
  EXPECT_EQ("Mumbai Indians", fptr->gettoss_Winner());
  EXPECT_EQ("Mumbai Indians", fptr->getmatch_winner());
   EXPECT_EQ("KH Pandya", fptr->getman_of_match());
}
}
/*
1082650	Mumbai Indians	Rising Pune Supergiants	5/21/2017	2017	Rajiv Gandhi International Stadium Uppal	Hyderabad (Deccan)	India	Mumbai Indians	Mumbai Indians	Bat	run	Result	KH Pandya

int main(int argc,char **argv)
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}*/
