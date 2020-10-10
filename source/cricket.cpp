
#include "cricket.h"
#include <iostream>
#include <list>
#include <iterator>

#include <string>


cricket::cricket(): match_id(0),team1(""),team2(""),match_date(""),season_Year(0),venue_Name(""),city_Name(""),country_Name(""),toss_Winner(""),match_winner(""),toss_Name(""),win_Type(""),outcome_Type(""),man_of_the_match(""){}
 
 cricket::cricket(int mid,std::string& t1,std::string& t2,std::string& mdate,int syear,std::string& vname,std::string& cname,std::string& ctryname,std::string& twin,std::string& m_win,std::string& tname,std::string& wtype,std::string& otype,std::string& mom):match_id(mid),team1(t1),team2(t2),match_date(mdate),season_Year(syear),
 venue_Name(vname),city_Name(cname),country_Name(ctryname),toss_Winner(twin),match_winner(m_win),
 toss_Name(tname),win_Type(wtype),outcome_Type(otype),man_of_the_match(mom){}


cricket::cricket(const cricket& c1): match_id(c1.match_id),team1(c1.team1),team2(c1.team2),match_date(c1.match_date),season_Year(c1.season_Year),venue_Name(c1.venue_Name),city_Name(c1.city_Name),country_Name(c1.country_Name),toss_Winner(c1.toss_Winner),match_winner(c1.match_winner),toss_Name(c1.toss_Name),win_Type(c1.win_Type),outcome_Type(c1.outcome_Type),man_of_the_match(c1.man_of_the_match){}
 
 
 
 std::string cricket::getteam1()
 {
 return team1;
 }
  std::string cricket::getteam2()
  {
  return team2;
  }

