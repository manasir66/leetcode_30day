#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <utility>
#include <set>
#include <bits/stdc++.h>

using namespace std;



int main(){

  vector<int> v1 = {1, 0, 1, 1, 1, 0, 0};
  replace(v1.begin(), v1.end(), 0, -1);
  for(int val : v1){
    cout << val << " | ";
  }
  return 0;
}
