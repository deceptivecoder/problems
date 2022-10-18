#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = nums.size();
        int i = 0;
        for(int num:nums){
            result ^= num;
            result ^= i;
            i += 1;
        }
        return result;
    }
};


int main(){
   Solution ob;
   vector<int> nums{1, 0, 3};
   cout << ob.missingNumber(nums);
   return 0;
}