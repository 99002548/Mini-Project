
#include "cricket.h"
#include "ipl.h"
#include "insightsofipl.h"
#include <list>
#include <iterator>

 std::list <ipl> iplmatches;
void insightsofipl::addmatch(int mid,std::string t1, std::string t2,std::string mdate,int syear,std::string vname,std::string cname,std::string ctryname,std::string twin,std::string m_win,std::string tname,std::string wtype,std::string otype,std::string mom)
{
    iplmatches.push_back(ipl(mid,t1,t2,mdate,syear,vname,cname,ctryname,twin,m_win,tname,wtype,otype,mom));
}

void insightsofipl::removematch(int mid)        
{
    std::list<ipl> :: iterator iter;

    for(iter=iplmatches.begin();iter!=iplmatches.end();iter++)
    {
        if(iter->getmatchid()==mid)
        {
           iplmatches.erase(iter);
           break;
        }
    }
}

ipl* insightsofipl::findMatchById(int mid)
{
     std::list<ipl> :: iterator iter;

    for(iter=iplmatches.begin();iter!=iplmatches.end();iter++)
    {
        if(mid ==iter->getmatchid())
        {
            return &(*iter);
        }
    }
    return NULL;

}

ipl* insightsofipl::findMatchByDate(std::string date, int syear)
{
    std::list<ipl> :: iterator iter;

    for(iter=iplmatches.begin();iter!=iplmatches.end();iter++)
    {
        if( date == iter->getmatchdate() && syear ==iter->getseasonyear())
        {
            return &(*iter);
        }
    }

    return NULL;

}


   int insightsofipl::matches_in_venue(std::string venue)  
   {
    int count=0;
    std::list<ipl> :: iterator iter;

    for(iter=iplmatches.begin();iter!=iplmatches.end();iter++)
    {
        if(venue == iter->getvenue())
        {
            count++;
        }
    }

    return count;
}

 int insightsofipl::num_of_matches(std::string t1)  //method overloading
   {
    int count=0;
    std::list<ipl> :: iterator iter;

    for(iter=iplmatches.begin();iter!=iplmatches.end();iter++)
    {
        if(t1 == iter->getteam1()|| t1== iter->getteam2())
        {
            count++;
        }
    }

    return count;
}

int insightsofipl::num_of_matches(std::string t1,int syear)  
   {
    int count=0;
    std::list<ipl> :: iterator iter;

    for(iter=iplmatches.begin();iter!=iplmatches.end();iter++)
    {
        if((t1 == iter->getteam1()|| t1== iter->getteam2()) && (syear == iter->getseasonyear() ))
        {
            count++;
        }
    }

    return count;
}

   
int insightsofipl::num_of_macthes_won(std::string t1)  
   {
    int count=0;
    std::list<ipl> :: iterator iter;

    for(iter=iplmatches.begin();iter!=iplmatches.end();iter++)
    {
        if(t1==iter->getmatch_winner())
        {
            count++;
        }
    }

    return count;
}

int insightsofipl::num_of_toss_won(std::string t1)
{

 int count=0;
    std::list<ipl> :: iterator iter;

    for(iter=iplmatches.begin();iter!=iplmatches.end();iter++)
    {
        if(t1==iter->gettoss_Winner())
        {
            count++;
        }
    }

    return count;
    }


int insightsofipl::countall()
{
return iplmatches.size();


}

template <typename T>
 int num_of_man_of_match(T player)
{
int count=0;
    std::list<ipl> :: iterator iter;

    for(iter=iplmatches.begin();iter!=iplmatches.end();iter++)
    {
        if(player.compare(iter->getman_of_match()))
        {
            count++;
        }
    }

    return count;
}


























