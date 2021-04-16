#include "../inc/GroupAnagrams.h"

#include <algorithm>
#include <map>
#include <set>

using namespace anagrams;

vector< vector<string> > GroupAnagrams::DoGroupAnagrams(
    const vector<string> &strs)
{
    // Algorithm:
    // 1. Initialize frequency map to store incoming words
    // 2. Sort incoming words
    // 3. Search for word in frequency map
    // 4. If found, group words together and append to {{result}}
    // 5. If not found, append to {{result}}
    // 6. Sort and return {{result}}
    vector< vector<string> > result;
    map<string, int> m;

    for (size_t i=0; i<strs.size(); i++)
    {
        string word = strs[i];
        sort(word.begin(), word.end());

        if (m.find(word) == m.end())
        {
            vector<string> v;
            v.push_back(strs[i]);
            result.push_back(v);
            m[word] = result.size() - 1;
        }
        else
        {
            result[m[word]].push_back(strs[i]);
        }
    }

    for (size_t i=0; i<result.size(); i++)
    {
        sort(result[i].begin(), result[i].end());
    }
    return result;
}


vector< vector<string> > GroupAnagrams::DoGroupAnagrams_1(
    const vector<string> &strs)
{
    // Algorithm:
    // 1. Initialize multiset frequency map to store incoming words
    // 2. Sort incoming words
    // 3. Append words to multiset frequency map
    // 4. Append grouped words and return {{result}}
    vector< vector<string> > result;
    map<string, multiset<string>> m;

    for (size_t i=0; i<strs.size(); i++)
    {
        string word = strs[i];
        sort(word.begin(), word.end());
        m[word].insert(strs[i]);
    }

    for (auto it : m)
    {
        vector<string> v(it.second.begin(), it.second.end());
        result.push_back(v);
    }
    return result;
}
