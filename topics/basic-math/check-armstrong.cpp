#include <bits/stdc++.h>
using namespace std;

class armstrong{
public:
    static bool checkArmstrong(int n){
        int num=n;
        int sum=0;
        int k= to_string(n).length();

        while(num>0){
            int ld=num%10;
            sum+=pow(ld,k);
            num=num/10;
        }
        return sum==num;
        
    }
};// SEMICOLON FOR CLOSING CLASS!!
int main(){
    int n=153;
    if (armstrong:: checkArmstrong(n)){
        cout<<true;
    }
    else{
        cout<< false;
    }
    return 0;
}