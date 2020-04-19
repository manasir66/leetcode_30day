#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <utility>
#include <set>
#include <bits/stdc++.h>

using namespace std;

class Solution {
  
  public:

    int minPathSum(vector<vector<int>>& grid) {
        
      if(grid.empty() == true || grid.size() == 0){
        return 0;
      }

      int dp[grid.size()][grid[0].size()];
      for(int r =0; r<grid.size(); ++r){
        for(int c = 0; c<grid[0].size(); ++c){
          dp[r][c] = grid[r][c];
          if(r>0 && c>0){
            dp[r][c] += min(dp[r-1][c], dp[r][c-1]);
          }
          else if(r>0){
            dp[r][c] += dp[r-1][c];
          }
          else if(c>0){
            dp[r][c] += dp[r][c-1];
          }

        }
      }
      return dp[grid.size()-1][grid[0].size()-1];

    }
};


int main(){

  vector< vector<int> > grid = { {1,3,1},{1,5,1},{4,2,1} };
  Solution b1;
  int minz = b1.minPathSum(grid);
  cout << minz << endl;
  return 0;
}
