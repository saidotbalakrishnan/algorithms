#define CATCH_CONFIG_MAIN
#include "../../../deps/Catch2/single_include/catch.hpp"

#include "../inc/ValidPalindrome.h"

using namespace palindrome;

TEST_CASE("Validate Palindrome", "[validate_palindrome]")
{
    ValidPalindrome v;

    SECTION("Verify given string is a palindrome")
    {
        REQUIRE(v.IsValidPalindrome("A"));
        REQUIRE(v.IsValidPalindrome("malayalam"));
        REQUIRE(v.IsValidPalindrome("Racecar"));
        REQUIRE(v.IsValidPalindrome("ROTOR"));
        REQUIRE(v.IsValidPalindrome("Top spot"));
        REQUIRE(v.IsValidPalindrome("No lemon, no melon"));
    }

    SECTION("Verify given string is not a palindrome")
    {
        REQUIRE_FALSE(v.IsValidPalindrome("alpha"));
        REQUIRE_FALSE(v.IsValidPalindrome("bravo"));
        REQUIRE_FALSE(v.IsValidPalindrome("charlie"));
        REQUIRE_FALSE(v.IsValidPalindrome("Racecars"));
        REQUIRE_FALSE(v.IsValidPalindrome("ROTORS"));
    }
}
