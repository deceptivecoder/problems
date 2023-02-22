#include<iostream>
#include<vector>
using namespace std;

bool solution(vector<int> &A, int K) {
    int n = A.size();
    for (int i = 0; i < n - 1; i++) {
        if ((A[i]!= A[i+1])  &&  (A[i] + 1 < A[i + 1]))
            return false;
    }
    if (A[0] != 1 || A[n - 1] != K)
        return false;
    else
        return true;
}
int main()
{
    vector<int> A = {1,1,2,3,3};
    
    int K = 3;
     
    cout<<solution(A, K)<<endl;
}