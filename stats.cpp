#include "stats.h"
#include<bits/stdc++.h>
using namespace std;

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& vec ) {
     Stats s;
    if(vec.empty())
        return s;
    //Implement statistics here
   
     s.average = (std::accumulate(vec.begin(), vec.end(), 0.0) / vec.size());
     s.max = *max_element(vec.begin(), vec.end());
     s.min = *min_element(vec.begin(), vec.end());
    return s;
}
