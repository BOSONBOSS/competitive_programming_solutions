#include <bits/stdc++.h>
using namespace std;
// make ur function
int find_largest(vector <int> &arr, int n){
    int largest=arr[0];
    for (int i=1;i<n;i++){
        if(largest<=arr[i]){
            largest=arr[i];
        }
    }
    return largest;
}

//write int main
int main(){
    // take input for array size n
    int n;
    cin>>n;

    // make array using vector
    vector <int> arr(n);
    //for taking input elements inside array
    for(int i=0;i<=n;i++){
        cin>> arr[i];
    }

    // output teh answewr:-
    int ans=find_largest(arr,n);
    cout<< ans<<endl;
    return 0;
}