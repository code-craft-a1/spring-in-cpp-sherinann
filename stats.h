#include <vector>
#include <math.h>

namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
    struct Stats {
        float average = NAN;
        float min = NAN;
        float max = NAN;
    };
    Stats ComputeStatistics(const std::vector<float>& values);
}
