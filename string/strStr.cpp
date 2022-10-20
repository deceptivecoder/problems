#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    //T: O(n2) S : O(1)
    int strStr(string haystack, string needle) {
        int sLen = haystack.size();
        int subsLen = needle.size();
        for (int i = 0; i < sLen; i ++ ){
            for (int j = 0; j < subsLen; j ++ ) {
                if (haystack[i+j] != needle[j]){
                    break;
                }
                if (j == needle.length() -1) {
                    return i;
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