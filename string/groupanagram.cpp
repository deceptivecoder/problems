#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (string s : strs) {
            string t = s; 
            sort(t.begin(), t.end());
            mp[t].push_back(s);
        }
        vector<vector<string>> anagrams;
        for (auto p : mp) { 
            anagrams.push_back(p.second);
        }
        return anagrams;
    }
};
    


int main(){
    Solution ob;
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> anagrams = ob.groupAnagrams(strs);
 
    for (vector<string> anagram: anagrams) {
        for (string s: anagram) {
            cout << s << ' ';
        }
        cout << endl;
    }

    return 0;
}