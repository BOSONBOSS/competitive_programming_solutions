#include <bits/stdc++.h>
using namespace std;
// to check if number is prime(1)or not(0)
bool checkPrime(int n){
    int cntr=0;
    for ( int i=1;i*i<=n;i++){
        if(n%i==0){
            cntr++;
            if(n/i!=i){
                cntr++;
            }
        }
    }
    if(cntr==2){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n=17;

  
    bool isPrime=checkPrime(n);
    if(isPrime){
        cout<<n<<" is Prime"<<endl;
    }
    else{
        cout<<n<<" is not Prime"<<endl;
    }
    return 0;
}