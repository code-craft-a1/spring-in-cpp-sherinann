#include "stats.h"

#include "gtest/gtest.h"
#include <cmath>

TEST(Statistics, ReportsAverageMinMax) {
    auto computedStats = Statistics::ComputeStatistics({1.5, 8.9, 3.2, 4.5});
    float epsilon = 0.001;
    EXPECT_LT(std::abs(computedStats.average - 4.525), epsilon);
    EXPECT_LT(std::abs(computedStats.max - 8.9), epsilon);
    EXPECT_LT(std::abs(computedStats.min - 1.5), epsilon);
}

TEST(Statistics, AverageNaNForEmpty) {
    auto computedStats = Statistics::ComputeStatistics({});
    EXPECT_NE(NAN, computedStats.average);
    EXPECT_NE(NAN, computedStats.min);
    EXPECT_NE(NAN, computedStats.max);
    // All fields of computedStats (average, max, min) must be
    // NAN (not-a-number), as defined in math.h
    
    // Specify the EXPECT statement here.
    // Use http://www.cplusplus.com/reference/cmath/isnan/
}
