#include "../inc/ValidAnagram.h"

#include <cstring>

using namespace anagrams;

#define SIZEOF_ARRAY(x) (sizeof(x) / sizeof((x)[0]))

bool ValidAnagram::IsValidAnagram(std::string s, std::string t)
{
    if (s.length() != t.length()) return false;

    // Algorithm:
    // 1. Initialize a alphabet frequency map (limited to lowercase chars)
    // 2. Increment frequency of char occurrences in s
    // 3. Decrement frequency of char occurrences in t
    // 4. Verify frequency of all char occurrences (0=anagram)
    int alpha_map[26];
    memset(alpha_map, 0, sizeof(alpha_map));

    for (size_t i=0; i<s.size(); i++)
    {
        alpha_map[s[i] - 'a']++;
    }

    for (size_t i=0; i<t.size(); i++)
    {
        alpha_map[t[i] - 'a']--;
    }

    for (size_t i=0; i<SIZEOF_ARRAY(alpha_map); i++)
    {
        if (alpha_map[i] != 0) return false;
    }
    return true;
}
