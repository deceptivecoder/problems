<<<<<<< HEAD
#include<iostream>
#include<vector>
#include <algorithm>
#include<unordered_map>
=======
#include <iostream>
#include<vector>
#include <unordered_set>

>>>>>>> 97c9a4f (Array: containsDuplicate)
using namespace std;

class Solution {
public:
<<<<<<< HEAD
=======

>>>>>>> 97c9a4f (Array: containsDuplicate)
    //TLE: O(n^2) Space O(1)
    // bool containsDuplicate(vector<int>& nums) {
    //     int size = nums.size();
    //     bool result = false;
    //     for (int i =0; i<=size-2; i++){
    //         for(int j = i+1; j <=size-1;j++){
    //             if(!(nums[i]^nums[j]))
    //                 return true;
    //         }
    //     }
    //     return false;
    // }
<<<<<<< HEAD
    //Time O(nlogn) Space O(1)
=======
    
    // Time O(nlogn) Space O(1)
>>>>>>> 97c9a4f (Array: containsDuplicate)
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
<<<<<<< HEAD
=======

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



#include <iostream>
#include<vector>
#include <unordered_set>
using namespace std;
 
class Solution {
public:
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
        return false;
    }
>>>>>>> 97c9a4f (Array: containsDuplicate)
};

int main(){
    Solution ob;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
<<<<<<< HEAD
    nums.push_back(0);
=======
    nums.push_back(1);
>>>>>>> 97c9a4f (Array: containsDuplicate)
    
    
    cout << ob.containsDuplicate(nums) <<endl;
    return 0;
}