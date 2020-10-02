#ifndef IPL_H__INCLUDED
#define IPL_H__INCLUDED

#include<string>
#include<cstdint>
#include "cricket.h"

class ipl : public cricket
 {
// const int overs=20;
    public:

ipl();
ipl(int,std::string,std::string,std::string,int,std::string,std::string,std::string,std::string,std::string,std::string,std::string,std::string,std::string);
  
    bool toss_match_won(std::string);
    std:: string getman_of_match();
    std:: string getvenue();
    std:: string gettoss_Winner();
    std:: string getmatch_winner();
    int getmatchid();
    std:: string getmatchdate();
    int getseasonyear();
};
#endif
