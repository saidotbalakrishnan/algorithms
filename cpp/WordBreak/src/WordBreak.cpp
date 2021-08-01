#include "../inc/WordBreak.h"

#include <iostream>
#include <vector>

using namespace word_break;

bool WordBreak::IsValidWordBreak(std::string s, std::set<std::string> &dict)
{
    // Algorithm:
    // Use a vector to track whether subarray from 0 to index 'i' can be
    // broken or not
    // 1. Check whether substring from 0 to index 'i' is int dict
    // 2. If true, then skip
    // 3. Else, break the substring to check
    // 4. If substring from 0 to j can be broken, then check the substring
    // from j to i
    std::vector<bool> v(s.size(), false);

    for (size_t i=0; i<s.size(); i++)
    {        
        std::string w = s.substr(0, i+1);
        v[i] = (dict.find(w) != dict.end());
        
        if (v[i]) continue;

        for (size_t j=0; j<i; j++)
        {
            if (v[j])
            {
                w = s.substr(j+1, i-j);
                v[i] = (dict.find(w) != dict.end());
                if (v[i]) break;
            }
        }
    }
    return v.size() ? v[v.size()-1] : false;
}
