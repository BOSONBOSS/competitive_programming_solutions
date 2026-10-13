#include <iostream>
using namespace std;

bool checkPalindrome(int n)
{
    int dup=n;
    long long rev=0;
    while (n>0){
        int ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    if(dup==rev){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<checkPalindrome(n);
}