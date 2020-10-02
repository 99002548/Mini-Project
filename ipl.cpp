#include "cricket.h"
#include "ipl.h"
#include <iostream>


ipl::ipl():cricket(){ }
ipl::ipl(int mid,std::string t1, std::string t2,std::string mdate,int syear,std::string vname,std::string cname,std::string ctryname,std::string twin,std::string m_win,std::string tname,std::string wtype,std::string otype,std::string mom):cricket(mid,t1,t2,mdate,syear,vname,cname,ctryname,twin,m_win,tname,wtype,otype,mom){}


    std:: string ipl::getman_of_match()
    {
    
    return man_of_the_match;
    
    }
  //doubht
     bool ipl::toss_match_won(std::string team)
     {
     
     if(toss_Winner==team && match_winner==team)
         return true;
      else 
          return false;
    }
    

    std:: string ipl::getvenue()
    {
    return venue_Name;
    }
    std:: string ipl::gettoss_Winner()
    {
    return toss_Winner;
    }
    std:: string ipl::getmatch_winner()
    {
    return match_winner;
    }   
    int ipl:: getmatchid()
    {
     return match_id;
     }
     
     std:: string ipl::getmatchdate()
     {
     return match_date;
     }
   int  ipl::getseasonyear()
    {
    return season_Year;
    }

//match_id,season_Year;
//  std::string team1,team2,match_date,venue_Name,city_Name,country_Name,toss_Winner,match_winner,toss_Name,win_Type,outcome_Type,man_of_the_match;
