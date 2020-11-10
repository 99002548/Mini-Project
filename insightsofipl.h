#ifndef INSIGHTSOFIPL_H_INCLUDED
#define INSIGHTSOFIPL_H_INCLUDED

#include "cricket.h"
#include "ipl.h"


#include <iostream>
#include <list>
#include <iterator>


class insightsofipl
{
public:
    std::list <ipl> iplmatches;

public:

   void addmatch(int,std::string,std::string,std::string,int,std::string,std::string,std::string,std::string,std::string,std::string,std::string,std::string,std::string);
   void removematch(int);
   ipl* findMatchById(int);
   ipl* findMatchByDate(std::string,int);
   int matches_in_venue(std::string);
  int num_of_matches(std::string,int);
  int num_of_matches(std::string);
   int num_of_macthes_won(std::string);
  int num_of_toss_won(std::string);
  int countall();
  template <typename T> T num_of_man_of_match(T player);
  ipl* maxid();
};

#endif













