#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left_sum=0;
        int total_sum= accumulate(nums.begin(),nums.end(),0);// The third argument (0) is the initial value of the sum
        for (int i=0;i<nums.size();i++){
            int right_sum= total_sum-left_sum-nums[i];
            //sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
            if(left_sum == right_sum){
            return i;
            }
            left_sum=left_sum+ nums[i];
        }
        return -1;
    }
};

//"The first line contains T, the number of test cases. Each test case consists of N followed by N integers."---- submit wth t-- while loop (mulit test case)
//The first line contains N, the size of the array. The second line contains N integers."-- without t part
int main(){
    //we use t for multiple quesries/ test cases, bs at a time the current code without t just checks for a single text xase,.
    int t;
    cin>> t;
    while(t--){//while loop for t-testcases
        
        int n;
        cin>>n;
        vector <int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        Solution obj;
        cout<< obj.pivotIndex(nums)<<endl;
    }// class teh full method inside teh while loop only!
    return 0;
}