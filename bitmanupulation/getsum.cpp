#include <iostream>
using namespace std;
class Solution {
public:
    int getSum(int a, int b) {
        // if (b==0){
        //     return a;
        // }
        // else{
        //     unsigned int carry =0;
        //     while(b){
        //         carry = a & b;
        //         a = a^b;
        //         b = carry <<1;
        //     }
        //     return a;
        // }
        
        //better solution taking extra space in stack but faster than above
    if (b == 0)
        return a;
    else
        return getSum( a ^ b,(unsigned) (a & b) << 1);

    }
};

int main(){
   Solution ob;
   cout << ob.getSum(2,3 );
   return 0;
}