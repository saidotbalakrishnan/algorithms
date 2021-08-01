#define CATCH_CONFIG_MAIN
#include "../../../deps/Catch2/single_include/catch.hpp"

#include "../inc/WordBreak.h"

using namespace word_break;

TEST_CASE("Validate word break", "[validate_word_break]")
{
    WordBreak w;

    SECTION("Verify string can be formed using dict words")
    {        
        std::set<std::string> dict_1 = {"leet", "code"};
        REQUIRE(w.IsValidWordBreak("leetcode", dict_1));
        std::set<std::string> dict_2 = {"apple", "pen"};
        REQUIRE(w.IsValidWordBreak("applepenapple", dict_2));
    }

    SECTION("Verify string of words does not follow given pattern")
    {
        std::set<std::string> dict_1 = {"leet", "code"};
        REQUIRE_FALSE(w.IsValidWordBreak("morsecode", dict_1));
        std::set<std::string> dict_2 = {"cats","dog","sand","and","cat"};
        REQUIRE_FALSE(w.IsValidWordBreak("catsandog", dict_2));
    }
}
