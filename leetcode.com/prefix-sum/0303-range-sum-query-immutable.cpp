#include <bits/stdc++.h>
using namespace std;

// make class NumArray
class NumArray{ // name of class is same as contrcutor NumArray
    public:
    vector <int> ps_arr;
     // 1. Constructor (only builds the prefix sum)
    NumArray(vector <int> &nums){ // name of constructor is same as contrcutor NumArray //therefore u pass teh same argument in the int main inside obj
        int n;
        n=nums.size();
        ps_arr.resize(n);

        ps_arr[0]=nums[0];
        for(int i=1;i<n;i++){
            ps_arr[i]=ps_arr[i-1]+nums[i];
        }

    }
    // 2. Query function (separate member function)
    int sumRange(int left, int right){
            if(left==0){
                return ps_arr[right];
            }
            return ps_arr[right]-ps_arr[left-1];
    }
};

int main(){
    int n;
    cin>>n;
    vector <int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

// till here- array is formed and populated.

// now make object bcz u made un-static class
//class name obj(argument--here nums)
    NumArray obj(nums);
    int left;
    int right;
    cin>>left;
    cin>>right;

    cout<< obj.sumRange(left,right);
    return 0;

}
// If a function has the SAME NAME as the class → it's a constructor. 

// If it has a DIFFERENT name → it's a regular method.