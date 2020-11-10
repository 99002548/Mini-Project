
#include "cricket.h"
#include "ipl.h"
#include "insightsofipl.h"
#include <list>
#include <iterator>
#include <algorithm>

 std::list <ipl> iplmatches;
void insightsofipl::addmatch(int mid,std::string t1, std::string t2,std::string mdate,int syear,std::string vname,std::string cname,std::string ctryname,std::string twin,std::string m_win,std::string tname,std::string wtype,std::string otype,std::string mom)
{
    iplmatches.push_back(ipl(mid,t1,t2,mdate,syear,vname,cname,ctryname,twin,m_win,tname,wtype,otype,mom));
}

void insightsofipl::removematch(int mid)        
{
    std::list<ipl> :: iterator iter;

    for(iter=iplmatches.begin();iter!=iplmatches.end();++iter)
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
    auto var =std::find_if(iplmatches.begin(),iplmatches.end(),[=] (ipl& r1)
{ return (r1.getmatchid()==mid );}
);
if(&(*var)!= NULL)
  return &(*var);
else 
return NULL;


}
ipl* insightsofipl::maxid()
{
    auto var =std::max_element(iplmatches.begin(),iplmatches.end(),[=] (ipl& r1, ipl& r2) 
{ return ( r1.getmatchid() < r2.getmatchid());}
);
           return &(*var);

}

ipl* insightsofipl::findMatchByDate(std::string date, int syear)
{
    
auto var =std::find_if(iplmatches.begin(),iplmatches.end(),[=] (ipl& r1)
{ return ( (r1.getmatchdate().compare(date)) && (r1.getseasonyear()==syear ) );}
);
           return &(*var);

}

   int insightsofipl::matches_in_venue(std::string venue)  
   {
 
int var =std::count_if(iplmatches.begin(),iplmatches.end(),[=] ( ipl& r1)
{ return !(r1.getvenue().compare(venue) );}
);
 
    return var;
}

 int insightsofipl::num_of_matches(std::string t1)  //method overloading
   {
   
int var =std::count_if(iplmatches.begin(),iplmatches.end(),[=] ( ipl& r1)
{ return (!(r1.getteam1().compare(t1) ) || !(r1.getteam2().compare(t1) )) ;}
);
 
    return var;
}


 

int insightsofipl::num_of_matches(std::string t1,int syear)  
   {
        
int var =std::count_if(iplmatches.begin(),iplmatches.end(),[=] ( ipl& r1)
{ return ((t1 == r1.getteam1()|| t1 == r1.getteam2()) && (syear == r1.getseasonyear() ));}
);
 

    return var;
}

   
int insightsofipl::num_of_macthes_won(std::string t1)  
   {
    int var =std::count_if(iplmatches.begin(),iplmatches.end(),[=] ( ipl& r1)
{ return (t1 == r1.getmatch_winner());}
);
 

    return var;
}
       

int insightsofipl::num_of_toss_won(std::string t1)
{
int var =std::count_if(iplmatches.begin(),iplmatches.end(),[=] ( ipl& r1)
{ return (t1 == r1.gettoss_Winner());}
);
 
    return var;
}
 
int insightsofipl::countall()
{
return iplmatches.size();

}

template <typename T>
 int num_of_man_of_match(T player)
{
int var =std::count_if(iplmatches.begin(),iplmatches.end(),[=] ( ipl& r1)
{ return (player.compare(r1.getman_of_match()));}
);
 
  
    return var;
}

























