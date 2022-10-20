#include<iostream>
#include <unordered_map>
#include<string>
#include<algorithm>

using namespace std;

//T: nlog(n) S: O(n)
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         int slen = s.size();
//         int tlen = t.size();

//         if(slen != tlen)
//             return false;
 
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());

//         for(int i =0; i<slen; i++){
//             if (s[i] != t[i]){
//                 return false;
//             }
//         }
//         return true;
//     }
// };

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int n = s.length();
        unordered_map<char, int> counts;
        for (int i = 0; i < n; i++) {
            counts[s[i]]++;
            counts[t[i]]--;
        }
        for (auto count : counts){
            if (count.second) return false;
        }
        return true;
    }
};

int main(){
    Solution ob;
    string s = "cat";
    string t = "rat";
    cout<< ob.isAnagram(s, t)<<endl;

}