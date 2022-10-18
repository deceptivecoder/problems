
#include <iostream>
using namespace std;

class Solution {
    public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        for (int i =31; i>=0; i--){
                uint32_t temp = n &1;
                result |= temp << i;
                n = n>>1;
        }
        return result;
    }
};

int main(){
   Solution ob;
   cout << ob.reverseBits(0b00000000000000000000001001110100);
   return 0;
}