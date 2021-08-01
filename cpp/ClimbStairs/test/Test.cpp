#define CATCH_CONFIG_MAIN
#include "../../../deps/Catch2/single_include/catch.hpp"

#include "../inc/ClimbStairs.h"

using namespace climb_stairs;

TEST_CASE("Get unique ways of climbing stairs", "[unique_climbing_ways]")
{
    ClimbStairs c;

    SECTION("Verify success")
    {
        REQUIRE(c.GetUniqueClimbingWays(0) == 0);
        REQUIRE(c.GetUniqueClimbingWays(1) == 1);
        REQUIRE(c.GetUniqueClimbingWays(2) == 2);
        REQUIRE(c.GetUniqueClimbingWays(3) == 3);
        REQUIRE(c.GetUniqueClimbingWays(4) == 5);
        REQUIRE(c.GetUniqueClimbingWays(5) == 8);
        REQUIRE(c.GetUniqueClimbingWays(10) == 89);
        REQUIRE(c.GetUniqueClimbingWays(45) == 1836311903);
    }
}
