#include <bits/stdc++.h>
using namespace std;
// function
vector <int> runningSum( vector <int> &nums){
    for( int i=1 ; i< nums.size(); i++){
        nums[i]= nums[i-1]+nums[i];         //PREFIX_SUM FORMULAAAAA!!
    }
    return nums;
}

int main(){
    //take input size
    int n;
    cin>> n;
    //make array+
    vector <int> nums(n);
    //loop for taking input inside
    for(int i=0;i<n;i++){
        cin>> nums[i];
    }
    // call function
    vector <int> ans= runningSum(nums);
    //print
    for(int j=0;j<nums.size();j++){
        cout<< nums[j];
    }
    return 0;
}

//CODING BLOCKS ANSWER

// #include <bits/stdc++.h>
// using namespace std;
// vector <int> runningSum(vector <int> &nums){
//     for (int i=1;i<nums.size();i++){
//         nums[i]=nums[i-1]+nums[i];
//     }
//     return nums;
// }

// int main() {
//     int n;
//     cin>> n;

//     vector <int> nums(n);
//     for(int i=0;i<n;i++){
//         cin>> nums[i];
//     }

//     vector <int> ans=runningSum(nums);
//     for(int j=0;j<ans.size();j++){
//         cout<< ans[j]<<" ";
//     }
//     return 0;
// }
