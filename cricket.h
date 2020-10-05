#ifndef CRICKET_H_INCLUDED
#define CRICKET_H_INCLUDED


#include <iostream>
#include <list>
#include <iterator>
#include <string>

class cricket
{
 protected:
 
    int match_id,season_Year;
  std::string team1,team2,match_date,venue_Name,city_Name,country_Name,toss_Winner,match_winner,toss_Name,win_Type,outcome_Type,man_of_the_match;
 

  public:

  cricket();
  cricket(int,std::string,std::string,std::string,int,std::string,std::string,std::string,std::string,std::string,std::string,std::string,std::string,std::string);
  cricket(const cricket&);
 
  virtual bool toss_match_won(std::string)=0;
   std::string getteam1();
  std::string getteam2();
 
};


#endif // BILLING_H_INCLUDED


