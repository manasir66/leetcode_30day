#include <bits:stdc++.h>

using namespace std;

class Solution {
    
public:
    int dp[1005][1005];
    int longestCommonSubsequence(string text1, string text2) {
        
        int dp[1005][1005];
        memset(dp, sizeof dp, -1);
    }

    int lcs(string s1, string s2, int i, int j, int dp){

      if(i == s1.size() || j == s2.size()){
        return 0;
      }

      if (dp[i][j] != -1)


    }
};

int main(){


  return 0;
}