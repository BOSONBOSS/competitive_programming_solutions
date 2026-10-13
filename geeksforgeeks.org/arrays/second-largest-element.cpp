#include <bits/stdc++.h>
using namespace std;

//second largest
int second_largest(vector <int> &arr, int n){
    int largest=arr[0];
    int sec_largest=INT_MIN;

    for(int i=1;i<n;i++){
        if (arr[i]>largest){
            sec_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>sec_largest){
            sec_largest=arr[i];
        }
    }

    return sec_largest;
}
// second smallest

int main(){
    int n;
    cin>>n;
    vector <int> arr(n);// use correct bracket for declaration of size!!!
    for (int i=0;i<n;i++){
        cin>> arr[i];
    }

    int ans=second_largest(arr,n);
    cout<< ans<<endl;

    return 0;
}