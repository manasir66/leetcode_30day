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

    int rangeBitwiseAnd(int m, int n) {
        
        int x = 0;

        while(m < n){
          m = m >> 1;
          n = m >> 1;
          x += 1;
        }

        return m << x;


    }
};


int main(){

  vector<int> v1;

  return 0;
}
