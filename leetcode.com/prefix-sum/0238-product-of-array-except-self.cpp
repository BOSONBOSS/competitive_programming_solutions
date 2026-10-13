#include <bits/stdc++.h>
using namespace std;

// class Solution{
//     public:
//     vector <int> productExceptSelf(vector <int> &nums){
//         int n=nums.size();
//         vector <int> left(n);
//         vector <int> right(n);
        

//         //for product of left
//         left[0]=1;
//         for(int i=1;i<n;i++){
//             left[i]=left[i-1]*nums[i-1];
//         }
//         // for product of right
//         right[n-1]=1;
//         for(int i=n-2;i>-1;i--){
//             right[i]=right[i+1]*nums[i+1];
//         }
//         vector <int> result(n);// right*left
//         for(int i=0;i<n;i++){
//             result[i]=left[i]*right[i];
//         }
//         return result;
//     }
// };

// int main(){
//     // int t;
//     // cin>>t;
//     // while(t--){
//         int n;
//         cin>>n;
//         vector <int> nums(n);
//         for(int i=0;i<n;i++){
//             cin>>nums[i];
//         }

//         Solution obj;
//         vector<int> answer= obj.productExceptSelf(nums);// this just gives teh full vector-- BUT it doesnt know whow to print each and every element
//         // so make loop to print each and every element products in teh result vector
//         for(int i=0;i<answer.size();i++){
//             cout<<answer[i]<<" ";
//         }
//    // }
//    return 0;
// }

class Solution{
public:
    vector <int> prodExceptSelf( vector <int> &nums){
        int n=nums.size();
        vector <int> left(n); //left array for current index ke left(i-1) side ke products
        vector <int> right(n); //right array for current index ke right(i+1) side ke products

        //now
        //left[i]:-
        //left[i] = product of everything to the LEFT of i
        left[0]=1;
        for(int i=1;i<n;i++){
            left[i]=left[i-1]*nums[i-1];
        }

        right[n-1]=1;
        for(int i=n-2;i>-1;i--){
            //right[i] = product of everything to the RIGHT of i
            right[i]=right[i+1]*nums[i+1];
        }
        //  answer[i]=right[i]*left[i]
        vector <int> answer(n);
        for(int i=0;i<n;i++){
            answer[i]=right[i]*left[i];
        }
        
        return answer;
    }
};