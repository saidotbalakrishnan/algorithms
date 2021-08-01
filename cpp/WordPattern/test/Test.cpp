#define CATCH_CONFIG_MAIN
#include "../../../deps/Catch2/single_include/catch.hpp"

#include "../inc/WordPattern.h"

using namespace word_pattern;

TEST_CASE("Validate word pattern", "[validate_word_pattern]")
{
    WordPattern w;

    SECTION("Verify string of words follows given pattern")
    {
        REQUIRE(w.IsValidWordPattern("abba", "alpha bravo bravo alpha"));
        REQUIRE(w.IsValidWordPattern("aaaa", "charlie charlie charlie charlie"));
    }

    SECTION("Verify string of words does not follow given pattern")
    {
        REQUIRE_FALSE(w.IsValidWordPattern("abba", "alpha bravo alpha bravo"));
        REQUIRE_FALSE(w.IsValidWordPattern("aaaa", "alpha bravo charlie delta"));
    }
}
