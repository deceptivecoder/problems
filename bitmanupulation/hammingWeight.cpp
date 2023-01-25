
#include <iostream>
using namespace std;

class Solution {
public:
    // int hammingWeight(uint32_t n) {
    //     int ans =0;
    //     while(n){
    //         if(n&1)
    //             ans = ans + 1;
    //         n= n>>1;
    //     }
    //     return ans;
    // }
    
    int hammingWeight(uint32_t n) {
        int count = 0;
    
        while (n) {
            n = n & (n - 1);
            count++;
        }
    
    return count;
    }

int main(){
   Solution ob;
   cout << ob.hammingWeight(4);
   return 0;
}