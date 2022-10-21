#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    // O(n^2) S O(1)
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0; i<nums.size()-1; i++){
            for(int j = i+1; j< nums.size(); j++){
                if((nums[i] + nums[j]) == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;

    }
    //T: O(n) S: O(N)
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> res;

        for(int i=0; i<nums.size(); i++){
            int requiredSum = target - nums[i];
            
            if(mp.find(requiredSum)!= mp.end()){
                res.push_back(i);
                res.push_back(mp[requiredSum]);
                return res;
            }
            mp[nums[i]]=i; 
        }
        return res;
    }
    // T: O(n) O(n)
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> map; // our 'memory'
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
        
            // if we haven't seen the complement yet, remember
            if (map.find(complement)!= map.end()) {
                result = { i, map[complement] };
                return result;
            } else {
                map[nums[i]] = i;   
            }
        }
        return result;
    }
};

void print_vector(vector<int> & result){
    for(auto i = result.begin(); i!= result.end(); i++){
        cout<<*i<<endl;
    }
}

int main(){
    Solution ob;
    vector<int> nums = {3,2,4};
    int target = 6;

    vector<int> result = ob.twoSum(nums, target);
    print_vector(result);
    return 0;

}