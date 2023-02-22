
#include <iostream>
#include <vector>
using namespace std;

bool isMonotonic(vector<int> array) {
  if (array.size() < 2) {
    return true; // array has less than 2 elements, so it is considered monotonic
  }
  int index =0;
  bool monotonic =true; //no monolithic
  while(index<array.size() && (array[index] ==array[index+1])){
    index++;
  }
  bool understandtrend = (array[index]>array[index+1])?false:true; //false decreasing tread true increasing
  bool currenttrend;

  for(int i =2; i<array.size();i++){
    if (array[i-1]>array[i]){
        currenttrend = false;
    } else if(array[i-1] == array[i]){
        currenttrend = understandtrend;
    } else{
        currenttrend = true;
    }
    if(currenttrend != understandtrend){
        monotonic = false;
        break;
    }
  }
  return monotonic;
}

int main(){

    vector<int> array = {-1, -1, -2, -3, -4, -5, -5, -5, -6, -7, -8, -8, -9, -10, -11};
    cout<<isMonotonic(array)<<endl;
    return 0;
}