#include "stats.h"

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& values) 
{
    Stats stats{};
    if (values.empty()) 
    {
        return stats;
    }
    stats.min = std::numeric_limits<float>::max();
    stats.max = std::numeric_limits<float>::lowest();
    stats.average = 0.0f;
    for(const auto& value: values){
        stats.average += value;
        if (value > stats.max) {
            stats.max = value;
        }
        if (value < stats.min) {
            stats.min = value;
        }

    }
    stats.average /= values.size();
    return stats;
}
