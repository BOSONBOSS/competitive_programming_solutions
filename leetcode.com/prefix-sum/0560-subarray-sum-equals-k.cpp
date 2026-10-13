// Count Subarrays with Sum = K
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int kSubarray(int k, vector <int> &nums){
        //hashmap
        unordered_map <int,int> mp;
        mp[0]=1;

        int count=0,sum=0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (mp.find(sum - k) != mp.end()){//------------> sum-k
                count+=mp[sum-k]; //-------> sum-K
            }
            mp[sum]++;
        }
        return count;
    
    }
};

int main(){
    int n,k; cin>>n>>k;
    vector <int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution obj;
    cout<<obj.kSubarray(k,nums)<<endl;
    return 0;
}