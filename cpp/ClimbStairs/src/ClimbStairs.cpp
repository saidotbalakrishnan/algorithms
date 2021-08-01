#include "../inc/ClimbStairs.h"

using namespace climb_stairs;

int ClimbStairs::GetUniqueClimbingWays(uint8_t n)
{
    // Algorithm
    if (n <= 3) return n;

    int arr[] = {2, 3};
    for (int i=4; i<=n; i++)
    {
        int tmp = arr[0] + arr[1];
        arr[0] = arr[1];
        arr[1] = tmp;
    }    
    return arr[1];
}
