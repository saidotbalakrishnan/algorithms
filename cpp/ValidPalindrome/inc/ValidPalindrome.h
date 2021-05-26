#ifndef VALID_PALINDROME_H
#define VALID_PALINDROME_H

#include <string>

namespace palindrome
{
    class ValidPalindrome
    {
public:
    bool IsValidPalindrome(std::string s);
private:
    std::string FilterString(std::string &s);
    };
}

#endif // VALID_PALINDROME_H
