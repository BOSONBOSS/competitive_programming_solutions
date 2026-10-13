#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector <int> twoSum(vector <int> &nums, int target){
        unordered_map <int,int> mp;

        for(int i=0;i<nums.size();i++){
            int complement=target-nums[i];

            if(mp.count(complement)){
                return {mp[complement],i};
            }
            mp[nums[i]]=i;

        }
        return {};
    }
};

int main(){
    //for multiple text cases
    // int t;
    // cin>>t;
    // while(t--){
        int n, target;
        cin>>n>>target;
        vector <int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        //main question output
        Solution obj;
        //output the index not teh values/pairs-so dont use-->for(auto &p:mp)
        //create a new vector ANS and then ussey cout<< the index=> *ANS[x]*
        //so
        vector <int> ans=obj.twoSum(nums,target);
        cout<<ans[0]<<" "<<ans[1]<<endl;
        

    //}
    return 0;
}