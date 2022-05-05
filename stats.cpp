#include "stats.h"
#include<bits/stdc++.h>

Stats Statistics::ComputeStatistics(const std::vector<float>& ref ) {
    //Implement statistics here
    Stats s;
     s.average = (std::accumulate(vec.begin(), vec.end(), 0.0) / vec.size());
     s.max = *max_element(vec.begin(), vec.end());
     s.min = *min_element(vec.begin(), vec.end());
    return s;
}
