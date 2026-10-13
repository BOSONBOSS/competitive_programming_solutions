// // Maximum Length Subarray contains Equal number of 0 and 1
#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int findMaxLength(vector<int>& nums) {
//         unordered_map<int, int> mp;
//         mp[0] = -1; // sum 0 is at index -1

//         int sum = 0, maxLen = 0;

//         for (int i = 0; i < nums.size(); i++) {
//             // CHANGED: explicit if-else instead of ternary
//             if (nums[i] == 0) {
//                 sum -= 1;
//             } else {
//                 sum += 1;            }

      
//             if (mp.find(sum) != mp.end()) {
//                 // Same sum seen before -> subarray between them has equal 0s and 1s
//                 maxLen = max(maxLen, i - mp[sum]);
//             } else {
//                 // Store first occurrence of this sum
//                 mp[sum] = i;
//             }
//         }
//         return maxLen;
//     }
// };

class Solution{
    public:
    int findMaxLength(vector <int> &nums){
        //hashmap
        unordered_map<int,int>mp;
        mp[0]=-1;

        int sum=0;
        int max_len=0;

        for(int i=0;i<nums.size();i++){
            if (nums[i]==0){
                sum-=1;
            }
            else{
                sum+=1;
            }


            if(mp.find(sum) != mp.end()){
                max_len=max(max_len, i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }
        return max_len;
    }
};



int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    cout << obj.findMaxLength(nums) << endl;

    return 0;
}