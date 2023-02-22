#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

// vector<int> twoNumberSum(vector<int> &array, int target){
//     vector<int> result;
//     for(int i =0; i<array.size()-1; i++){
//         for(int j = i+1; j< array.size(); j++){
//             if(target == array[i]+array[j]){
//                 result.push_back(array[i]);
//                 result.push_back(array[j]);
//                 return result;
//             }
//         }
//     }
//     return result;
// }

// vector<int> twoNumberSum(vector<int> &array, int target){
//     vector<int> result;
//     unordered_set<int> uset;
//     for(int i =0; i<array.size(); i++){
//         int expectednum = target - array[i];
//         // if(uset.count(expectednum)==0){
//         //     uset.insert(array[i]);
//         // }else{
//         //     result.push_back(array[i]);
//         //     result.push_back(expectednum);
//         //     return result;
//         // }
//         if(uset.find(expectednum)!=uset.end()){
//             result.push_back(array[i]);
//             result.push_back(expectednum);
//             return result;
//         }else{
//             uset.insert(array[i]);
//         }
//     }
//     return result;
// }

vector<int> twoNumberSum(vector<int> &array, int target){
    vector<int> result;
    int left = 0;
    int right = array.size()-1;

    sort(array.begin(), array.end());
    for (int i =0; i< array.size(); i++){
        if (target = array[left] + array[right]){
            result.push_back(array[left]);
            result.push_back(array[right]);
            return result;
        }else if (target > array[left] + array[right]){
            left++;
        }else if (target < array[left] + array[right]){
            right++;   
        }
    }
    return result;
}

int main(){
    vector<int> result;
    vector<int> array = {3,5,4,8,11,1,-1,6};
    int target = 10;
    result = twoNumberSum(array, target);
    for(auto num: result)
        cout<< num<<" "<<endl;
    return 0;

}