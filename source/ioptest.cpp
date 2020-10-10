#include "ipl.h"
#include "insightsofipl.h"
#include "cricket.h"
#include <gtest/gtest.h>

#include <bits/stdc++.h>
using namespace std;
#include <list>
#include <iterator>

namespace {

class ioptest : public ::testing::Test {

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
   		 //++iter;
    		for(;iter!=res.end();++iter)
    		{
    			//cout<<*iter<<endl;
    			stringstream ss(*iter); 
    			while (ss.good()) 
    			{ 
        			string substr; 
        			getline(ss, substr, ','); 
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
		c.addmatch(match_id,team1,team2,match_date,season_Year,venue_Name,city_Name,country_Name,toss_Winner,match_winner,toss_Name,win_Type,outcome_Type,man_of_the_match);
								
								match_id=0;season_Year=0;team1="";team2="";match_date="";venue_Name="";
								city_Name="";country_Name="";toss_Winner="";match_winner="";toss_Name="";win_Type="";outcome_Type="";man_of_the_match="";count=0;
						
						
						}
						++count;
						
		    			} 
		  		}
    
 
 			 }
 			 
  void TearDown() {

  }
  insightsofipl c;
};



TEST_F(ioptest, matches_in_venue) {
 
  EXPECT_EQ(6, c.matches_in_venue("Rajiv Gandhi International Stadium"));
}

TEST_F(ioptest, num_of_matches) {
 
  EXPECT_EQ(10, c.num_of_matches("Chennai Super Kings",2008));
}
TEST_F(ioptest, num_of_matches1) {
 
  EXPECT_EQ(10, c.num_of_matches("Chennai Super Kings"));
}

TEST_F(ioptest, removematch) {
  c.removematch(336012);
  EXPECT_EQ((ipl*)NULL, c.findMatchById(336012));
  
}

TEST_F(ioptest, num_of_macthes_won) {
 
  EXPECT_EQ(6, c.num_of_macthes_won("Chennai Super Kings"));
}

TEST_F(ioptest, num_of_toss_won) {
 
  EXPECT_EQ(5, c.num_of_toss_won("Chennai Super Kings"));
}


TEST_F(ioptest, findMatchById) {
  ipl *iptr=c.findMatchById(335990);
  EXPECT_EQ(335990,iptr->getmatchid());
   EXPECT_EQ("Wankhede Stadium",iptr->getvenue());
    EXPECT_EQ("Mumbai Indians",iptr->gettoss_Winner());
     EXPECT_EQ("Royal Challengers Bangalore",iptr->getmatch_winner());
     EXPECT_EQ("4/20/2008",iptr->getmatchdate());
}
TEST_F(ioptest, countall) {
 
  EXPECT_EQ(40, c.countall());
}

/*
TEST_F(ioptest, num_of_man_of_match) {
 
  EXPECT_EQ(3, c.num_of_man_of_match<std::string>("MEK Hussey"));
}

*/

}






/*
335988	Kings XI Punjab	Chennai Super Kings	4/19/2008	2008	Punjab Cricket Association Stadium Mohali	Chandigarh	India	Chennai Super Kings	Chennai Super Kings	bat	runs	Result	MEK Hussey

*/





















 // namespace

