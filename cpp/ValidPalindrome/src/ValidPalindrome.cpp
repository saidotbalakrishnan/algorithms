#include "../inc/ValidPalindrome.h"

#include <cstring>
#include <locale>

using namespace palindrome;

#define SIZEOF_ARRAY(x) (sizeof(x) / sizeof((x)[0]))

bool ValidPalindrome::IsValidPalindrome(std::string s)
{
    // If string is empty or just 1 char long, consider it a palindrome
    if (s.length() == 1) return true;

    // Algorithm:
    // 1. Filter string to only contain lower-case alphanumeric chars
    // 2. Loop through half of string and compare chars from start and end
    // indices

    s = FilterString(s);

    for (size_t i=0; i<s.size()/2; i++)
    {
        if (s[i] != s[s.size()-i-1])
            return false;
    }
    return true;
}

std::string ValidPalindrome::FilterString(std::string &s)
{
    std::string t;
    for (size_t i=0; i<s.size(); i++)
    {
        if (isalpha(s[i]) || isdigit(s[i]))
            t.push_back(tolower(s[i]));
    }
    return t;
}
