#include "../inc/CountBits.h"

using namespace count_bits;

std::vector<int> CountBits::GetBitCountArray(int n)
{
    // Algorithm
    // bits_cnt[0] => 0000 => 0
    // bits_cnt[1] => 0001 => 1
    // bits_cnt[2] => 0010 => 0010 + 0 => 1 + bits_cnt[0]
    // bits_cnt[3] => 0011 => 0010 + 1 => 1 + bits_cnt[1]
    // bits_cnt[x] = bits_cnt[x & (x-1) ] + 1;

    std::vector<int> count(n+1, 0);

    for (int i=1; i<=n; i++)
    {
        count[i] = count[i & (i-1)] + 1;
    }
    return count;
}
