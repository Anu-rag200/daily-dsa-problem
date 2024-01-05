// Count possible ways to construct buildings:-
// https://www.geeksforgeeks.org/problems/count-possible-ways-to-construct-buildings5007/1


#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
  int TotalWays(int N)
  {
    int mod = 1e9 + 7;
    if (N == 1)
      return 4;
    long long int b = 1, s = 1, bn1, sn1;
    for (int i = 2; i <= N; i++)
    {
      bn1 = b;
      sn1 = s;
      // updating our values
      b = sn1;
      s = sn1 + bn1;

      b %= mod;
      s %= mod;
    }
    long long int res = b + s;
    res %= mod;

    res *= res;
    res %= mod;

    return res;
  }
};