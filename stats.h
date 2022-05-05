#include <vector>
#include<bits/stdc++.h>

using namespace std;

namespace Statistics {
    
    struct Stats
    {
        float average=NAN;
        float min=NAN;
        float max=NAN;
    };
    Stats ComputeStatistics(const std::vector<float>& ref );
}
