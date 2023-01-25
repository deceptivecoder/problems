
#include <iostream>
#include <vector>
using namespace std;

class Solution {
    //T: O(n^2) S(1)
// public:
//     vector<int> countBits(int n) {
//         int result =0;
//         vector<int> ans;
//         for(int i=0; i<=n; i++){
//             result = hammingWeight(i);
//             ans.push_back(result);
//         }
//         return ans;
//     }

// private:
//     int hammingWeight(uint32_t n) {
//         int ans =0;
//         while(n){
//             if(n&1)
//                 ans = ans + 1;
//             n= n>>1;
//         }
//         return ans;
//     }
public:
    //T: O(n) S: O(n)
    vector<int> countBits(int n) {
        
        // n+1 as we are going to count from 0 to n
        vector<int> ans(n+1);
        
        // t[0] will be 0 beacuse 0 has count of set bit is 0;
        ans[0] = 0;
        
        // we can compute current set bit count using previous count
        // as x/2 in O(1) time
        
        // i%2 will be 0 for even number ans 1 for odd number
        
        for(int i = 1; i<=n; ++i)
            ans[i] = ans[i/2] + i%2;
        
        return ans;
    }
 
public:
    void print_vector(vector<int> & result){
    for(auto i = result.begin(); i!= result.end(); i++){
        cout<<*i<<endl;
    }
}

};
int main(){
   Solution ob;
   vector<int> res;
   res = ob.countBits(5);
   ob.print_vector(res);
   return 0;
}