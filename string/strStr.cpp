#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    //T: O(n2) S : O(1)
    int strStr(string haystack, string needle) {
        int sLen = haystack.size();
        int subLen = needle.size();
        for (int sitr = 0; sitr < sLen; sitr++ ){
            for (int subitr = 0; subitr < subLen; subitr++ ) {
                if (haystack[sitr+subitr] != needle[subitr]){
                    break;
                }
                if (subitr == needle.length() -1) {
                    return sitr;
                }
            }
        }
        return -1;
    }
};

int main(){
    Solution ob;

    string haystack = {"mississippi"};
    string needle = {"issip"};
    cout<<ob.strStr(haystack, needle)<<endl;
    return 0;
}