#include <bits/stdc++.h>
using namespace std;

int countDigits(long long n)
{
    long long count=0;
    while(n>0){
        n=n/10;
        count=count+1;
    }
    return count;
}
int main()
{
    long long n;
    cout<<"enter a number:";
    cin>>n;
    if(n<0 || n==0){
        cout<<"please enter a positive number:"<<endl;
        cin>>n;
    }
    cout<<"the number of digits in the number is "<<countDigits(n)<<endl;
    return 0;
}