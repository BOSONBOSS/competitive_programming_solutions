#include <bits/stdc++.h>
using namespace std;

bool twoSum( vector <int> &arr, int target){
    int l=0,r=arr.size()-1;

    while(l<r){
        int sum=arr[l]+arr[r];

        if(sum==target){
            return true;
        }
        else if(sum>target){
            r--;
        }
        else{
            l++;
        }
    }
    return false;
}

int main(){
    int n, target;
    cin>>n>>target;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //for question;-
    if(twoSum(arr,target)){
        cout<< " yes"<<endl;
    }
    else{
        cout<<" no"<< endl;
    }
    return 0;
}