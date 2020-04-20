#include <algorithm>
#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {

        int pv = find_pivot(0, nums.size()-1, nums);

        return 0;
    }

    int find_pivot(int st, int ed, vector<int>& arr){
        
        int mid_index = floor((st + ed) / 2);
        if (arr[mid_index] > arr[mid_index+1]){
            return (mid_index+1);
        }
        return 0;
    }
};


int main(){



    return 0;
}