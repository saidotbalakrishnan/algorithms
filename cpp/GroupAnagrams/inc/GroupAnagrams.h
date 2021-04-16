#ifndef GROUP_ANAGRAMS_H
#define GROUP_ANAGRAMS_H

#include <string>
#include <vector>

using namespace std;

namespace anagrams
{
    class GroupAnagrams
    {
public:
    vector< vector<string> > DoGroupAnagrams(const vector<string> &strs);
    vector< vector<string> > DoGroupAnagrams_1(const vector<string> &strs);
    };
}

#endif // GROUP_ANAGRAMS_H
