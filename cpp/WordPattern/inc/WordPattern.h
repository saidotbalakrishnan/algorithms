#pragma once

#include <string>
#include <vector>

namespace word_pattern
{
    class WordPattern
    {
public:
    bool IsValidWordPattern(std::string pattern, std::string str);
private:
    std::vector<std::string> FilterString(std::string s, char delimiter);
    };
}
