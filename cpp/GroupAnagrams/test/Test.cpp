#define CATCH_CONFIG_MAIN
#include "../../../deps/Catch2/single_include/catch.hpp"

#include "../inc/GroupAnagrams.h"

using namespace anagrams;

TEST_CASE("Group Anagrams Solution 1", "[group_anagrams_1]")
{
    GroupAnagrams g;

    SECTION("Verify anagrams are grouped correctly")
    {
        vector<vector<string>> v1 = g.DoGroupAnagrams(
            {"eat","tea","tan","ate","nat","bat"});
        vector<vector<string>> v2 =
        {
            {"bat"},
            {"nat","tan"},
            {"ate","eat","tea"}
        };

        REQUIRE(v1.size() == v2.size());
        sort(v1.begin(), v1.end(),
            [](const vector<string> s1, const vector<string> s2)
            { return s1.size() < s2.size(); });

        sort(v2.begin(), v2.end(),
            [](const vector<string> s1, const vector<string> s2)
            { return s1.size() < s2.size(); });
        REQUIRE(v1 == v2);
    }
}

TEST_CASE("Group Anagrams Solution 2", "[group_anagrams_2]")
{
    GroupAnagrams g;

    SECTION("Verify anagrams are grouped correctly")
    {
        vector<vector<string>> v1 = g.DoGroupAnagrams_1(
            {"eat","tea","tan","ate","nat","bat"});
        vector<vector<string>> v2 =
        {
            {"bat"},
            {"nat","tan"},
            {"ate","eat","tea"}
        };

        REQUIRE(v1.size() == v2.size());
        sort(v1.begin(), v1.end(),
            [](const vector<string> s1, const vector<string> s2)
            { return s1.size() < s2.size(); });

        sort(v2.begin(), v2.end(),
            [](const vector<string> s1, const vector<string> s2)
            { return s1.size() < s2.size(); });
        REQUIRE(v1 == v2);
    }
}
