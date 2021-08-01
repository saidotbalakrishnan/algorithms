#define CATCH_CONFIG_MAIN
#include "../../../deps/Catch2/single_include/catch.hpp"

#include "../inc/CountBits.h"

using namespace count_bits;

TEST_CASE("Get count of 1's in bits", "[count_1_in_bits]")
{
    CountBits c;

    SECTION("Verify success")
    {
        std::vector<int> cnt1 = {0, 1, 1};
        REQUIRE(c.GetBitCountArray(2) == cnt1);
        std::vector<int> cnt2 = {0, 1, 1, 2, 1, 2};
        REQUIRE(c.GetBitCountArray(5) == cnt2);
    }
}
