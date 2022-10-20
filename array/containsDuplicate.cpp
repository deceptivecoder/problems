<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 0e23b95dbc5e5c3bfd780692cc3ec187053c3a25
#include<iostream>
#include<vector>
#include <algorithm>
#include<unordered_map>

using namespace std;

class Solution {
public:

    //TLE: O(n^2) Space O(1)
    bool containsDuplicate(vector<int>& nums) {
        int size = nums.size();
        bool result = false;
        for (int i =0; i<=size-2; i++){
            for(int j = i+1; j <=size-1;j++){
                if(!(nums[i]^nums[j]))
                    return true;
            }
        }
        return false;
    }

    //Time O(nlogn) Space O(1)
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(begin(nums), end(nums));
        bool result = false;
        for(int i = 1; i<n ; i++){
            if(nums[i] == nums[i-1]){
                result = true;
            }
        }
        return result;
    }

    //T = O(N) O(N)
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>s;
        bool result = false;
        for(int i = 0; i<n ; i++){

            if(s.count(nums[i])){
                 return result = true;
            }
            s.insert(nums[i]);

        }
        return result;
    }
};

int main(){
    Solution ob;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(0);
 
    cout << ob.containsDuplicate(nums) <<endl;
    return 0;
}
