#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int countOnes(vector <int> &arr){
        int n=arr.size();
        int first=-1;//update this value
        //binary search tish starts...

        //binary search for first1
        int low=0, high=n-1;
        while(low<=high){
            int mid=low+high-low/2;
            if(arr[mid]==1){
                first=mid;
                high=mid-1;//try to find 1 in earlier left
            }
            else{
                low=mid+1; //move right
            }

            
        }
        if(first== -1){
            return 0; //no 1s
        }
        return n-first;//final retrun
    }
};

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Solution obj;
    cout<< obj.countOnes(arr)<<endl;
    return 0;
}
