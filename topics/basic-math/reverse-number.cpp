#include <iostream>
using namespace std;

int reverseNum(int n){
    int rev=0;
    int ld;
    while(n>0){
        ld=n%10;
        rev=(rev*10)+ld;
        n=n/10;
    }
    return rev;
}

int main(){
    int n;
    cout<<"enter number to reverse:";
    cin>>n;
    if(n<0 ||n==0){
        cout<<"please enter a positive number:"<<endl;
        cin>>n;
    }
    cout<<"the reverse of the number is "<<reverseNum(n)<<endl;
    return 0;
}