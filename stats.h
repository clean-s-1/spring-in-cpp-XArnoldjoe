#include <vector>
#include<bits/stdc++.h>

using namespace std;

namespace Statistics {
    
    class IAlerter
    {
        bool status=false;
        public:
        void setStatus(bool res){ status = res;}
        bool getStatus(){ return status;}
       
    };
    class  EmailAlert:public IAlerter
    {
        
       public:
       bool emailSent(){ return getStatus();}
     };
    
    class LEDAlert:public  IAlerter
    {
    
       public:
       bool ledGlows(){return getStatus();}
      };
    
    class StatsAlerter
    {
        float threshold;
        std::vector<Statistics::IAlerter*> vec;
        public:
        StatsAlerter(float num, std::vector<Statistics::IAlerter*> alerters):threshold(num), vec(alerters){}
        
        void checkAndAlert(const std::vector<float>& ref)
        {
            bool res = (*max_element(ref.begin(), ref.end())) > threshold;
            for(auto it = vec.begin(); it != vec.end(); ++it)
            {
                it->setStatus(res);
            }
        }
    };
            
            
    
    struct Stats
    {
        float average=NAN;
        float min=NAN;
        float max=NAN;
    };
    Stats ComputeStatistics(const std::vector<float>& ref );
}
