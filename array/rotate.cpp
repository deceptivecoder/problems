#include<bits/stdc++.h>
using namespace std;
 
// Function to rightRotate array
void Rotate(int arr[], int d, int n)
{
    int p = 1;
    while (p <= d) {
        int last = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = last;
        p++;
    }
    for (int j =0;j<n;j++){
        cout<<arr[j]<<endl;
    }
}
     
// Driver code
int main()
{
    int Array[] = { 3,8,9,7,6};
    int N = sizeof(Array) / sizeof(Array[0]);
    int K = 3;
     
    Rotate(Array, N, K);
}