// You are given an array arr[] of integers. Find the total count of subarrays with their sum equal to 0.
// Input: arr[] = [0, 0, 5, 5, 0, 0]
// Output: 6
// Explanation: The 6 subarrays are [0], [0], [0], [0], [0,0], and [0,0].

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int findSubarray( vector <int> &nums){
        //hashmap
        unordered_map <int,int> mp;
        mp[0]=1;

        int sum=0;
        int count=0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if(mp.find(sum) != mp.end()){
                count+=mp[sum];
            }
            mp[sum]++;
        }
        return count;
    }
};

int main(){
    int n;cin>>n;
    vector <int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution obj;
    cout<< obj.findSubarray(nums)<<endl;
    return 0;
}