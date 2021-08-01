#include "../inc/WordPattern.h"

#include <iostream>
#include <sstream>
#include <unordered_map>

using namespace word_pattern;

std::vector<std::string> WordPattern::FilterString(std::string s, char delimiter)
{
    std::vector<std::string> out;
    std::stringstream ss(s);
    std::string tok;

    while (getline(ss, tok, delimiter))
        out.push_back(tok);
    return out;
}

bool WordPattern::IsValidWordPattern(std::string pattern, std::string str)
{
    // Algorithm
    // Use 2 unordered maps, 1 to map pattern chars to words and 1 to map words
    // to pattern chars.
    // Loop over the strings. If element not found, add to hashmap. If found,
    // check whether mapping between pattern char and word exists.
    std::unordered_map<char, std::string> pattern_dict;
    std::unordered_map<std::string, char> words_dict;

    size_t length = pattern.size();
    std::vector<std::string> words = FilterString(str, ' ');

    if (length != words.size())
        return false;

    for (size_t i=0; i<length; i++)
    {
        char &ch = pattern[i];
        std::string &s = words[i];

        if (pattern_dict.find(ch) == pattern_dict.end())
            pattern_dict[ch] = s;

        if (words_dict.find(s) == words_dict.end())
            words_dict[s] = ch;

        // check if mapping between pattern chars and words is violated
        if (pattern_dict[ch] != s || words_dict[s] != ch)
            return false;
    }
    return true;
}
