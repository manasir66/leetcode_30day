#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
  vector<int> vec1{-1,2,4,-3,5,2,-5,2};
  int ans =0;
  int temp = 0;
  for(int val : vec1){
    temp += val;
    ans = max(ans, temp);
    temp = max(temp, 0);
  }
  cout << endl << ans << endl << endl;
  return 0;
}