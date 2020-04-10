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
    bool backspaceCompare(string S, string T) {
    
    vector<char> v1;
    vector<char> v2;
    for(char c : S){
      if (c == '#'){
        if (v1.size() >= 1){
          v1.pop_back();          
        }
      }
      else v1.push_back(c);
    }
    for(char c : T){
      if (c == '#'){
        if (v2.size() >= 1){
          v2.pop_back();          
        }
      }
      else v2.push_back(c);
    }

      return v1 == v2;
    }
};

int main(){

string S = "ab##48";
string T = "c#d#";
vector<char> v1;
vector<char> v2;
for(char c : S){
  if (c == '#'){
    v1.pop_back();
  }
  else v1.push_back(c);
}
for(char c : T){
  if (c == '#'){
    v2.pop_back();
  }
  else v2.push_back(c);
}
  if (v1 == v2) {
    cout << true << endl;
  }
  else cout << false << endl;
  return 0;
}
