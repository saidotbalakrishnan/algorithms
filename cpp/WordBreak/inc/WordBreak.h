#pragma once

#include <set>
#include <string>

namespace word_break
{
    class WordBreak
    {
public:
    bool IsValidWordBreak(std::string s, std::set<std::string> &dict);
    };
}
