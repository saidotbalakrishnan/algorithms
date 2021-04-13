#define CATCH_CONFIG_MAIN
#include "../../../deps/Catch2/single_include/catch.hpp"

#include "../inc/ValidAnagram.h"

using namespace anagrams;

TEST_CASE("Validate Anagrams", "[validate_anagrams]")
{
    ValidAnagram v;

    SECTION("Verify given strings are anagrams")
    {
        // reference: https://wordsmith.org/anagram/hof.html
        REQUIRE(v.IsValidAnagram("listen", "silent"));
        REQUIRE(v.IsValidAnagram("dictionary", "indicatory"));
        // fun fact: longest one-word anagram in english
        REQUIRE(v.IsValidAnagram("conversationalists", "conservationalists"));
        REQUIRE(v.IsValidAnagram("the eyes", "they see"));
        REQUIRE(v.IsValidAnagram("debit card", "bad credit"));
        REQUIRE(v.IsValidAnagram("madam curie", "radium came"));
        REQUIRE(v.IsValidAnagram("a gentleman", "elegant man"));
        REQUIRE(v.IsValidAnagram("the detectives", "detect thieves"));
        REQUIRE(v.IsValidAnagram("the morse code", "here come dots"));
        REQUIRE(v.IsValidAnagram("eleven plus two", "twelve plus one"));
    }

    SECTION("Verify given strings are not anagrams")
    {        
        REQUIRE_FALSE(v.IsValidAnagram("abcd", "abd"));
        REQUIRE_FALSE(v.IsValidAnagram("hat", "mat"));
        REQUIRE_FALSE(v.IsValidAnagram("pqrs", "pqrt"));
        REQUIRE_FALSE(v.IsValidAnagram("fast", "star"));
        REQUIRE_FALSE(v.IsValidAnagram("east", "west"));
        REQUIRE_FALSE(v.IsValidAnagram("north", "south"));
        REQUIRE_FALSE(v.IsValidAnagram("apple", "pearl"));
        REQUIRE_FALSE(v.IsValidAnagram("listen", "stencil"));
        REQUIRE_FALSE(v.IsValidAnagram("nature", "nurture"));
        REQUIRE_FALSE(v.IsValidAnagram("drizzle", "sizzle"));
    }
}
