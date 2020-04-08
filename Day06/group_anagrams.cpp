#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <utility>
#include <set>
#include <bits/stdc++.h>


using namespace std;

class Solution{
  
  public:
    vector<vector<string> > groupAnagrams(vector<string>& strs) {

      int length_of_vec = strs.size();
      
      vector< vector<string> > vec2;
      string copy_of_word;
      for(string s : strs){
        copy_of_word = s;
        sort(begin(copy_of_word), end(copy_of_word));

      }
      
      return vec2;
    }


};

int main(){

  int ar[] = {1,2,3,4};
  vector<int> vec1(begin(ar), end(ar));

  vector<int> vec2 = {1,2,3,4};
  vector<int> vec3{1,2,3,4};
  vector<string> st{"dab", "paris", "australia"};

  for(string s : st){
    string scp = s;
    sort(scp.begin(), scp.end());
    cout << scp << endl;
  }
  
  for(int x : ar){
    cout << x << " ";
  }

  map<int, int> mp;
  mp.insert({ 1, 20 });
  cout << endl;
  for(auto x : mp){
    cout << x.first << " : " << x.second << endl;
  }

  return 0;
}